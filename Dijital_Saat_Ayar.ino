#include <virtuabotixRTC.h>

int CLK_PIN = 6;
int DAT_PIN = 7;
int RST_PIN = 8;

virtuabotixRTC myRTC(CLK_PIN, DAT_PIN, RST_PIN);

void setup() {

  serial.begin(9600);
  myRTC.setDS1302Time( 55, 20, 9, 5, 7, 2019);

}

void loop() {

  myRTC.updateTime();

  Serial.print("Tarih /Saat: ");
  Serial.print(myRTC.dayofmonth);
  Serial.print("/");
  Serial.print(myRTC.month);
  Serial.print("/");
  Serial.print(myRTC.year);
  Serial.print(" ");
  Serial.print(myRTC.hours);
  Serial.print(":");
  Serial.print(myRTC.minutes);
  Serial.print(":");
  Serial.println(myRTC.seconds);

  delay(1000);
}
