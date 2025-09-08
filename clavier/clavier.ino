#include <Keypad.h>
#include <LiquidCrystal.h>
int rs=1,en=0,d4=13,d5=12,d6=11,d7=10;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);


const byte ROWS = 4; 
const byte COLS = 3;


char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};


byte rowPins[ROWS] = {5, 4, 3, 2};  // Lignes
byte colPins[COLS] = {8, 7, 6};  // Colonnes

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup() {
  
  lcd.begin(3, 4); 
 // lcd.print("Press a key:"); 
}

void loop() {
   char customKey = customKeypad.getKey(); 

  if (customKey) { 
    lcd.clear(); 
    lcd.setCursor(0, 0); 
    lcd.print("Key: ");  
      lcd.print(customKey);
      
    delay(1000);
    lcd.clear();         
    
  }
}
