void muduno(){
  if (millis() - lastmillis >= 1000){ //Uptade every one second, this will be equal to reading frecuency (Hz).
    durasi_d --;
    if (durasi_d>59){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Hi, " + String(user_id));
      lcd.setCursor(0, 1);
      lcd.print("Timer " + String(durasi_d/60));
    }
    if (durasi_d<60){
      if (durasi_d>0){
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Hi, " + String(user_id));
        lcd.setCursor(0, 1);
        lcd.print("Timer " + String(durasi_d));
      }
    }
    if (durasi_d<1){
      durasi_s="";
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Lamp Timer  PENS");
      lcd.setCursor(0, 1);
      lcd.print("D4 ELKA LJ2015");
      level=0;
      Serial2.println("k" + String(level));
      mode=0;
    }
    lastmillis = millis(); // Up tade lasmillis
  }
}

