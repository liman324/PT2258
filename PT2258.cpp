#include <Arduino.h>
#include <Wire.h>
#include "PT2258.h"

PT2258::PT2258(){
	Wire.begin();
}



void PT2258::setVolume(int vol){
  vol = 79 - vol;
  int vol10 = vol/10;
  int vol1 = vol%10;
  writeWire(vol10+0b11010000);
  writeWire(vol1+ 0b11100000);
}

void PT2258::setVol1(int v1){
  v1 = 79 - v1;
  int v1_10 = v1/10;
  int v1_1 = v1%10;
  writeWire(v1_10+0b10000000);
  writeWire(v1_1+ 0b10010000);
}

void PT2258::setVol2(int v2){
  v2 = 79 - v2;
  int v2_10 = v2/10;
  int v2_1 = v2%10;
  writeWire(v2_10+0b01000000);
  writeWire(v2_1+ 0b01010000);
}

void PT2258::setVol3(int v3){
  v3 = 79 - v3;
  int v3_10 = v3/10;
  int v3_1 = v3%10;
  writeWire(v3_10+0b00000000);
  writeWire(v3_1+ 0b00010000);
}

void PT2258::setVol4(int v4){
  v4 = 79 - v4;
  int v4_10 = v4/10;
  int v4_1 = v4%10;
  writeWire(v4_10+0b00100000);
  writeWire(v4_1+ 0b00110000);
}

void PT2258::setVol5(int v5){
  v5 = 79 - v5;
  int v5_10 = v5/10;
  int v5_1 = v5%10;
  writeWire(v5_10+0b01100000);
  writeWire(v5_1+ 0b01110000);
}

void PT2258::setVol6(int v6){
  v6 = 79 - v6;
  int v6_10 = v6/10;
  int v6_1 = v6%10;
  writeWire(v6_10+0b10100000);
  writeWire(v6_1+ 0b10110000);
}

void PT2258::setMute(int mute){
  if(mute==0){writeWire(0b11111000);}
  if(mute==1){writeWire(0b11111001);}
}


void PT2258::writeWire(char a){
  Wire.beginTransmission(PT2258_address);
  Wire.write (a);
  Wire.endTransmission();
}
