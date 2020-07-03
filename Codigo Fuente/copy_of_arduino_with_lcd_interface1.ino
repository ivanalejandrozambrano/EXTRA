#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
 lcd.begin(16, 2); 
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  lcd.setCursor(0,0);          
  lcd.print("   Hola!"); 
  lcd.setCursor(2,1);           
  lcd.print("   ESPE");    
  }