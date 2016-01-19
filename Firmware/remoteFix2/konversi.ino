void u_id (){
  
  
  switch (String(user_id,BIN).length()){
    /*
    case  1:
    idd = "000"  +   String(user_id,BIN);
    break;


    case  2:
    idd = "00"  +   String(user_id,BIN);
    break;
    case  3:
    idd = "0"  +   String(user_id,BIN);
    break;

    case  4:
    idd = String(user_id,BIN);
    */
    
    case  1:
    idd = "0000000"  +   String(user_id,BIN);
    break;
    
    case  2:
    idd = "000000"  +   String(user_id,BIN);
    break;

    case 3:
    idd = "00000"  +   String(user_id,BIN);
    break;
    
    case  4:
    idd = "0000"  +   String(user_id,BIN);
    break;
    
    case  5:
    idd = "000"  +   String(user_id,BIN);
    break;


    case  6:
    idd = "00"  +   String(user_id,BIN);
    break;
    case  7:
    idd = "0"  +   String(user_id,BIN);
    break;

    case  8:
    idd = String(user_id,BIN);
    break;

  }
  
//Serial.println(idd);
    
}


void konversi_id(){
  if  (idd.substring(0,1) == "0"){id0=0;}
  if  (idd.substring(1,2) == "0"){id1=0;}
  if  (idd.substring(2,3) == "0"){id2=0;}
  if  (idd.substring(3,4) == "0"){id3=0;}
  if  (idd.substring(4,5) == "0"){id4=0;}
  if  (idd.substring(5,6) == "0"){id5=0;}
  if  (idd.substring(6,7) == "0"){id6=0;}
  if  (idd.substring(7,8) == "0"){id7=0;}

  if  (idd.substring(0,1) == "1"){id0=2048;}
  if  (idd.substring(1,2) == "1"){id1=1024;}
  if  (idd.substring(2,3) == "1"){id2=512;}
  if  (idd.substring(3,4) == "1"){id3=256;}
  if  (idd.substring(4,5) == "1"){id4=128;}
  if  (idd.substring(5,6) == "1"){id5=64;}
  if  (idd.substring(6,7) == "1"){id6=32;}
  if  (idd.substring(7,8) == "1"){id7=16;}

  
  
id_dec=id0+id1+id2+id3+id4+id5+id6+id7;
/*
  if  (idd.substring(0,1) == "0"){id0=d0;}
  if  (idd.substring(1,2) == "0"){id1=d0;}
  if  (idd.substring(2,3) == "0"){id2=d0;}
  if  (idd.substring(3,4) == "0"){id3=d0;}
  if  (idd.substring(4,5) == "0"){id4=d0;}
  if  (idd.substring(5,6) == "0"){id5=d0;}
  if  (idd.substring(6,7) == "0"){id6=d0;}
  if  (idd.substring(7,8) == "0"){id7=d0;}

  if  (idd.substring(0,1) == "1"){id0=d1;}
  if  (idd.substring(1,2) == "1"){id1=d1;}
  if  (idd.substring(2,3) == "1"){id2=d1;}
  if  (idd.substring(3,4) == "1"){id3=d1;}
  if  (idd.substring(4,5) == "1"){id4=d1;}
  if  (idd.substring(5,6) == "1"){id5=d1;}
  if  (idd.substring(6,7) == "1"){id6=d1;}
  if  (idd.substring(7,8) == "1"){id7=d1;}
*/  
  //Serial.println(String(id0) + " " + String(id1) + " " + String(id2) + " " + String(id3));
}


