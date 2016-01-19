<?php
    mysql_connect("localhost", "root", "") or die("Error connecting to database: ".mysql_error());
    mysql_select_db("lamp_timer") or die(mysql_error());
?>

<?php
    $query = $_GET['query']; 
    $min_length = 1;
    if(strlen($query) >= $min_length){ 
        $query = htmlspecialchars($query); 
        $query = mysql_real_escape_string($query); 
        $raw_results = mysql_query("SELECT * FROM Pengguna WHERE (`user_id` LIKE '%".$query."%')") or die(mysql_error());
        if(mysql_num_rows($raw_results) > 0){ // if one or more rows are returned do following
            while($results = mysql_fetch_array($raw_results)){
                echo "z" .$results['user_id'];
            }
        }
        else{ 
            echo "z0";
        }
    }
    else{ 
        echo "Minimum length is ".$min_length;
    }
?>
