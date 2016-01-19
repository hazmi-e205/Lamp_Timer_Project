Imports MySql.Data.MySqlClient

Public Class Form1

#Region "Deklarasi"
    Public mysql_koneksi As New MySqlConnection
    Public mysql_reader As MySqlDataReader
    Public mysql_command As New MySqlCommand
    Public mysql_query, data_serial As String
    Dim tik As Integer
#End Region


    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        baudrate()
        TabControl1.Enabled = False
    End Sub


#Region "MySQL Koneksi"
    Private Sub mysql_conn_Click(sender As Object, e As EventArgs) Handles mysql_conn.Click
        mysql_koneksi.ConnectionString = "server=" & ipserver.Text & ";userid=lamp_timer;password=timer;database=lamp_timer"
        If mysql_conn.Text = "Disconnected" Then
            Try
                mysql_koneksi.Open()
                mysql_conn.Text = "Connected"
                TabControl1.Enabled = True
                Timer2.Start()
            Catch ex As MySqlException
                MessageBox.Show(ex.Message)
                mysql_conn.Text = "Disconnected"
                TabControl1.Enabled = False
                Timer2.Stop()
            Finally
                mysql_koneksi.Dispose()
            End Try
        Else
            mysql_koneksi.Close()
            mysql_conn.Text = "Disconnected"
            TabControl1.Enabled = False
            Timer2.Stop()
        End If
    End Sub


#End Region


#Region "Pengguna Aktif"
    Private Sub Timer2_Tick(sender As Object, e As EventArgs) Handles Timer2.Tick
        Dim query_upt As String
        Dim command_upt As MySqlCommand
        Dim sda As New MySqlDataAdapter
        Dim dbdataset As New DataSet
        Dim bsource As New BindingSource

        Dim query_upt1 As String
        Dim command_upt1 As MySqlCommand
        Dim sda1 As New MySqlDataAdapter
        Dim dbdataset1 As New DataSet
        Dim bsource1 As New BindingSource

        Try
            dbdataset.Tables.Clear()
            query_upt = "SELECT *  FROM lamp_timer.pengguna"
            command_upt = New MySqlCommand(query_upt, mysql_koneksi)
            sda.SelectCommand = command_upt
            sda.Fill(dbdataset, "pengguna")
            bsource.DataSource = dbdataset.Tables("pengguna")
            DataGridView1.DataSource = bsource

            dbdataset1.Tables.Clear()
            query_upt1 = "SELECT *  FROM lamp_timer.list_aktif"
            command_upt1 = New MySqlCommand(query_upt1, mysql_koneksi)
            sda1.SelectCommand = command_upt1
            sda1.Fill(dbdataset1, "list_aktif")
            bsource1.DataSource = dbdataset1.Tables("list_aktif")
            DataGridView2.DataSource = bsource1

        Catch ex As MySqlException
            MessageBox.Show(ex.Message)
        Finally
            mysql_koneksi.Dispose()

        End Try
    End Sub
#End Region


#Region "Remote"
#Region "Serial"
    Private Sub baudrate()
        ComboBox2.Items.Add("9600")
        ComboBox2.Items.Add("19200")
        ComboBox2.Items.Add("38400")
        ComboBox2.Items.Add("115200")
    End Sub

    Private Sub ComboBox1_Click(sender As Object, e As EventArgs) Handles ComboBox1.Click
        ComboBox1.Items.Clear()
        ComboBox1.Items.AddRange(IO.Ports.SerialPort.GetPortNames)
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If Button1.Text = "Disconnected" Then
            Try
                SerialPort1.PortName = ComboBox1.Text
                SerialPort1.BaudRate = ComboBox2.Text
                SerialPort1.Open()
                Button1.Text = "Connected"
            Catch ex As Exception
                MsgBox("Pastikan Koneksi Anda Benar !!!", MsgBoxStyle.Exclamation, "Peringatan")
                Button1.Text = "Disconnected"
            End Try
        Else
            SerialPort1.Close()
            Button1.Text = "Disconnected"
        End If
    End Sub

    Delegate Sub ambildata(ByVal datanya As String)
    Public getdata As New ambildata(AddressOf terimadata)
    Private Sub SerialPort1_DataReceived(sender As Object, e As IO.Ports.SerialDataReceivedEventArgs) Handles SerialPort1.DataReceived
        Dim datanya As String = SerialPort1.ReadLine
        Invoke(getdata, datanya)
    End Sub
    Private Sub terimadata(ByVal datanya As String)
        data_serial = datanya
    End Sub
#End Region
#Region "Program"
    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Button2.Enabled = False
        Timer1.Start()
    End Sub

    Private Sub Timer1_Tick(sender As Object, e As EventArgs) Handles Timer1.Tick

        tik += 1

        Select Case tik
            Case 1
                ProgressBar1.Value = 1
                status_txt.Text = "Memulai..."

            Case 2
                Try
                    SerialPort1.Write("a")
                    ProgressBar1.Value = 70
                    status_txt.Text = "Mengirim Program..."
                    'Timer1.Start()
                Catch ex As Exception
                    tik = 0
                    ProgressBar1.Value = 0
                    status_txt.Text = ex.Message.ToString
                    Timer1.Stop()
                    Button2.Enabled = True
                End Try

            Case 4
                If data_serial = TextBox4.Text Then
                    ProgressBar1.Value = 100
                    status_txt.Text = "Program terkirim dan terverifikasi"
                Else
                    tik = 0
                    ProgressBar1.Value = 0
                    status_txt.Text = "Program bermasalah"
                    Timer1.Stop()
                    Button2.Enabled = True
                End If

            Case 5
                tik = 0
                ProgressBar1.Value = 0
                status_txt.Text = "......."
                Timer1.Stop()
                Button2.Enabled = True
        End Select


    End Sub


#End Region
#End Region


#Region "Pengguna"
    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        Dim pengguna As String = TextBox1.Text
        Try
            mysql_koneksi.Open()
            mysql_query = "insert into lamp_timer.pengguna (Nama) values ('" & TextBox1.Text & "')"
            mysql_command = New MySqlCommand(mysql_query, mysql_koneksi)
            mysql_reader = mysql_command.ExecuteReader
            TextBox1.Clear()
            mysql_koneksi.Close()
        Catch ex As MySqlException
            MessageBox.Show(ex.Message)
            TextBox1.Text = pengguna
        Finally
            mysql_koneksi.Dispose()
        End Try
    End Sub




#End Region

End Class
