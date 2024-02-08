
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Enter your code:");

  lcd.print("*****");
}

void loop() {
  delay(2000);

  delay(2000);

  delay(2000);

  delay(2000);

  delay(2000);
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  lcd.print("I'm      ");
  lcd.setCursor(0, 1);
  lcd.print("I study CS");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("***");
  lcd.setCursor(0, 1);
  lcd.print(" :)");
  delay(2000);
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
}