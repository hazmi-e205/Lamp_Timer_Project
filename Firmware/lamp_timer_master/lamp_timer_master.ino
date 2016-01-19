#include <LiquidCrystal.h>
#include <SPI.h>
#include <Ethernet.h>
#include <EEPROM.h>
unsigned  long  id0,id1,id2,id3,id4,id5,id6,id7;
int AC_LOAD = 20;    // Output to Opto Triac pin
int dimming = 128;  // Dimming level (0-128)  0 = ON, 128 = OFF
int level=0;
LiquidCrystal lcd(7, 6, 5, 4, 3, 22);
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress server(192,168,1,2);
IPAddress ip(192, 168, 1, 1);
EthernetClient client;
String trima;
int user_id = EEPROMReadlong(6);
unsigned long durasi;
String data, perintah;
int nilai,id_dec;
int mode=0;
String durasi_s;
String data1;
unsigned long lastmillis = 0;
unsigned long lastmillis2 = 0;
long durasi_d;

void setup() {
  lcd.begin(16, 2);
  //EEPROMWritelong(6, 2); //user_id : 2
  lcd.print("Lamp Timer  PENS");
  lcd.setCursor(0, 1);
  lcd.print("D4 ELKA LJ2015");
  Serial.begin(9600);
  Serial2.begin(9600);
      Serial2.println("k" + String(level));
  Ethernet.begin(mac, ip);
  pinMode(AC_LOAD, OUTPUT);// Set AC Load pin as output
  attachInterrupt(digitalPinToInterrupt(21), zero_crosss_int, RISING);  // Choose the zero cross interrupt   
}

void loop() {
  serial();
  if (Serial.available()) {
    level = Serial.parseInt();
  }
  dimming = map(level,0,100,128,0);
  
  if(mode==0){
    ir();
    //Serial.println(durasi_s);
  }
  if (mode==1){
    muduno();
  }
  
}

