

void ir(){
  durasi = pulseIn(2, LOW);
  skala();
  cek();
}

void skala() {
   if(durasi > 2000) {
    nilai=2;
    data = String(nilai);
  }
  
  if(durasi >1000 && durasi <2000) { 
    nilai=1; 
    data += String(nilai);
  }
  
  if(durasi >100 && durasi <1000) {
    nilai = 0;
    data += String(nilai);
  }
}

void cek() {
  if (data.length() == 11){
    long id_terima;
    konversi_id();
    /*
    if (id_dec != (user_id)){
      konek();
      ambilweb();
    }
    */
    if (id_dec == (user_id)){
    lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Hi, " + String(user_id));
      if (data.substring(7, 11) == "0000"){
        durasi_s+="0";
        lcd.setCursor(0, 1);
        lcd.print("Timer " + durasi_s);
        }
      if (data.substring(7, 11) == "0001"){
        durasi_s+="1";
        lcd.setCursor(0, 1);
        lcd.print("Timer " + durasi_s);
      }
      if (data.substring(7, 11) == "0010"){
        durasi_s+="2";
        lcd.setCursor(0, 1);
        lcd.print("Timer " + durasi_s);
        }
      if (data.substring(7, 11) == "0011"){
        durasi_s+="3";
        lcd.setCursor(0, 1);
        lcd.print("Timer " + durasi_s);
        }
      if (data.substring(7, 11) == "0100"){
        durasi_s+="4";
        lcd.setCursor(0, 1);
        lcd.print("Timer " + durasi_s);
        }
      if (data.substring(7, 11) == "0101"){
        durasi_s+="5";
        lcd.setCursor(0, 1);
        lcd.print("Timer " + durasi_s);
        }
      if (data.substring(7, 11) == "0110"){
        durasi_s+="6";
        lcd.setCursor(0, 1);
        lcd.print("Timer " + durasi_s);
        }
      if (data.substring(7, 11) == "0111"){
        durasi_s+="7";
        lcd.setCursor(0, 1);
        lcd.print("Timer " + durasi_s);
        }
      if (data.substring(7, 11) == "1000"){
        durasi_s+="8";
        lcd.setCursor(0, 1);
        lcd.print("Timer " + durasi_s);
        }
      if (data.substring(7, 11) == "1001"){
        durasi_s+="9";
        lcd.setCursor(0, 1);
        lcd.print("Timer " + durasi_s);
        }
      if (data.substring(7, 11) == "1010"){
        level ++;
      Serial2.println("k" + String(level));
        lcd.setCursor(0, 1);
        lcd.print("Level " + String(level));
        durasi_s="";
      }
      if (data.substring(7, 11) == "1011"){
        level --;
      Serial2.println("k" + String(level));
        lcd.setCursor(0, 1);
        lcd.print("Level " + String(level));
        durasi_s="";
      }
      if (data.substring(7, 11) == "1100"){
        durasi_d = durasi_s.toInt()*60;
        mode=1;
      }
      
    }
    
    //Serial.println(data);
    data="";
    
    
  }
}

void konversi_id(){
  if  (data.substring(1,2) == "0"){id0=0;}
  if  (data.substring(2,3) == "0"){id1=0;}
  if  (data.substring(3,4) == "0"){id2=0;}
  if  (data.substring(4,5) == "0"){id3=0;}
  if  (data.substring(5,6) == "0"){id3=0;}
  if  (data.substring(6,7) == "0"){id3=0;}


  if  (data.substring(1,2) == "1"){id0=32;}
  if  (data.substring(2,3) == "1"){id1=16;}
  if  (data.substring(3,4) == "1"){id2=8;}
  if  (data.substring(4,5) == "1"){id3=4;}
  if  (data.substring(5,6) == "1"){id4=2;}
  if  (data.substring(6,7) == "1"){id5=1;}

  
  
id_dec=id0+id1+id2+id3+id4+id5+id6+id7;
}
