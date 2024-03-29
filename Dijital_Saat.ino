#include <LiquidCrystal.h>
#include <virtuabotixRTC.h>

int CLK_PIN = 6;
int DAT_PIN = 7;
int RST_PIN = 8;

virtuabotixRTC myRTC(CLK_PIN, DAT_PIN, RST_PIN);
int rs = 12,en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {

 lcd.begin(16,2);
}

void loop() {

  myRTC.updateTime();

 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print(myRTC.dayofMonth);
 lcd.print("/");
 lcd.print(myRTC.month);
 lcd.print("/");
 lcd.print(myRTC.year);

 lcd.setCursor(0,1);
 
 lcd.print(myRTC.hours);
 lcd.print(":");
 lcd.print(myRTC.minutes);
 lcd.print(":");
 lcd.println(myRTC.seconds);
  
  delay(1000);
}
