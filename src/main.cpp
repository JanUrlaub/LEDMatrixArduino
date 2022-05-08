#include <MD_MAX72xx.h>
#include <SPI.h>
#include <kathiFont.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

#define APSSID "ESPap"
#define APPSK  "langespasswort"

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 8
#define LEDROWS 8
#define MODSTART 0
#define MODEND 7
#define BRIGHTNESS 0x0 

#define CLK_PIN   14  // or SCK or D5 or grün
#define DATA_PIN  13  // or MOSI or D7 or orange
#define CS_PIN    15  // or SS or D8 or gelb
MD_MAX72XX mx = MD_MAX72XX(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

ESP8266WebServer webserver(80);

//#define CLK_PIN   4  // or SCK or D2 or grün
//#define DATA_PIN  0  // or MOSI or D3 or orange
//#define CS_PIN    2  // or SS or D4 or gelb
//MD_MAX72XX mx = MD_MAX72XX(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);


uint8_t reverse2(uint8_t in)
{
  uint8_t out;
  char i;

  out = 0;

  for (i = 0; i < 8; i++) {
      out <<= 1;
      if (in & 1)
        out |= 1;
      in >>= 1;
  }

  return out;
}


int setChar(char text, int offset)
{

  uint8_t   cBuf[LEDROWS];
  int charLength = mx.getChar(text, LEDROWS, cBuf);
  Serial.print("Buchstabenbreite: "+ String(charLength)+"\n");
  for(int i=0;i<charLength;i++)
  {
    mx.setColumn(i+offset, reverse2(cBuf[i]));
  }

  mx.getChar(text+128, LEDROWS, cBuf);
  for(int i=0;i<charLength;i++)
  {
    mx.setColumn(63-i-offset,cBuf[i]);
  }
  return offset+charLength+1;
}

void setText(String message)
{

  if(message.length()<=0)
  {
    return;
  }

  webserver.send(200, "text/html", "<h1>You are connected</h1><p>"+message+"</p>");

  mx.control(MODSTART, MODEND, MD_MAX72XX::UPDATE, MD_MAX72XX::OFF);

  mx.clear();

  int str_length = message.length()+1;
  char buff[str_length];
  message.toCharArray(buff, str_length);
  Serial.println(buff);

  int offset = 0;
  for(int i = 0; i < str_length-1; i++)
  {
    Serial.println(buff[i]);
    offset = setChar(buff[i], offset);
  }

  mx.control(MODSTART, MODEND, MD_MAX72XX::UPDATE, MD_MAX72XX::ON);
}

void handleRoot() {
  String message = webserver.arg(0);
  setText(message);
}

void setup() {
  Serial.begin(57600);

  Serial.println();
  Serial.println();

  mx.begin();
  mx.setFont(kathiFont);
  mx.control(MODSTART, MODEND, MD_MAX72XX::INTENSITY, BRIGHTNESS);
  mx.clear();
  Serial.println("LED Matrix started");

  bool wifi = WiFi.softAP(APSSID, APPSK);
  if(wifi)
  {
    Serial.println("Wifi started");
  }
  else
  {
    Serial.println("Wifi failed");
  }

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
  webserver.on("/", handleRoot);
  webserver.begin();
  Serial.println("HTTP server started");

  setText("Kathi");
}

void loop() {
  webserver.handleClient();
}