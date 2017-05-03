
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int button1Pin = 9;  // pushbutton 1 pin
const int button2Pin = 10;  // pushbutton 2 pin


void setup()
{
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  
  lcd.begin(16, 2);
  lcd.clear(); 
}

void loop()
{
  int buttonstate1, buttonstate2;

  buttonstate1 = digitalRead(button1Pin);
  buttonstate2 = digitalRead(button2Pin);

  if (((buttonstate1 == LOW) || (buttonstate2 == LOW))&& !((buttonstate1 == LOW) && (buttonstate2 == LOW))) 
  {
    lcd.print("test2");
  }
  else
  {
    lcd.print("test1");
  }
  
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}
