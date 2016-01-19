#include "Keypad.h"
#include "IRremote.h"
#include <EEPROM.h>
int addr_durasi = 6; 

IRsend irsend;
const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'#','0','*','D'}
};
byte rowPins[ROWS] = {5, 6, 7, 8}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {9, 10, 11, 12}; //connect to the column pinouts of the keypad
int user_id=EEPROMReadlong(0);
unsigned  int  d0=600;
unsigned  int  d1=1200;
unsigned  int  d2=2400;
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
unsigned  long  id0,id1,id2,id3,id4,id5,id6,id7;

unsigned  long id_dec=0;
unsigned  long perintah_dec=0;
 int khz = 40;
String idd;


void setup()
{
Serial.begin(9600);
u_id();
konversi_id();
Serial.println(idd);
}
 
void loop()
{
 aturan(); 
 krim();
 u_id();
 konversi_id();
 


}
