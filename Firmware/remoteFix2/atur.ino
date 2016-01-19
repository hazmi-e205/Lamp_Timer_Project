void aturan(){
  user_id=EEPROMReadlong(0);
  if (Serial.available()>0){
    String myString = Serial.readStringUntil('\n');
    if (myString.substring(0, 1) == "d") {
      int idnya = (myString.substring(1)).toInt();
      EEPROMWritelong(0, idnya);
    }
  }
}


void EEPROMWritelong(int address, long value)
      {
      //Decomposition from a long to 4 bytes by using bitshift.
      //One = Most significant -> Four = Least significant byte
      byte two = (value & 0xFF);
      byte one = ((value >> 8) & 0xFF);
     

      //Write the 4 bytes into the eeprom memory.
      EEPROM.write(address, two);
      EEPROM.write(address + 1, one);
      
      }

//This function will return a 4 byte (32bit) long from the eeprom
//at the specified address to address + 3.
long EEPROMReadlong(long address)
      {
      //Read the 4 bytes from the eeprom memory.
      long two = EEPROM.read(address);
      long one = EEPROM.read(address + 1);
     

      //Return the recomposed long by using bitshift.
      return ((two << 0) & 0xFF) + ((one << 8) & 0xFFFF);
      }

