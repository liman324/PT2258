#include <Arduino.h>
#include <Wire.h>
#include "PT2258.h"

PT2258::PT2258(){
	Wire.begin();
}

void PT2258::clear(){
  Wire.beginTransmission(PT2258_address);
  Wire.write (CLEAR);
  Wire.endTransmission();
}

void PT2258::setVolume(int vol){
  vol = 79 - vol;
  int vol10 = vol/10;
  int vol1 = vol%10;
  writeWire(vol10 + VOL_MASTER_10, vol1 + VOL_MASTER_1);
}

void PT2258::setVol1(int v1){
  v1 = 79 - v1;
  int v1_10 = v1/10;
  int v1_1 = v1%10;
  writeWire(v1_10 + VOL_1CH_10, v1_1 + VOL_1CH_1);
}

void PT2258::setVol2(int v2){
  v2 = 79 - v2;
  int v2_10 = v2/10;
  int v2_1 = v2%10;
  writeWire(v2_10 + VOL_2CH_10, v2_1 + VOL_2CH_1);
}

void PT2258::setVol3(int v3){
  v3 = 79 - v3;
  int v3_10 = v3/10;
  int v3_1 = v3%10;
  writeWire(v3_10 + VOL_3CH_10, v3_1 + VOL_3CH_1);
}

void PT2258::setVol4(int v4){
  v4 = 79 - v4;
  int v4_10 = v4/10;
  int v4_1 = v4%10;
  writeWire(v4_10 + VOL_4CH_10, v4_1 + VOL_4CH_1);
}

void PT2258::setVol5(int v5){
  v5 = 79 - v5;
  int v5_10 = v5/10;
  int v5_1 = v5%10;
  writeWire(v5_10 + VOL_5CH_10, v5_1 + VOL_5CH_1);
}

void PT2258::setVol6(int v6){
  v6 = 79 - v6;
  int v6_10 = v6/10;
  int v6_1 = v6%10;
  writeWire(v6_10 + VOL_6CH_10, v6_1 + VOL_6CH_1);
}

void PT2258::setMute(int mute){
  Wire.beginTransmission(PT2258_address);
  Wire.write (MUTE + mute);
  Wire.endTransmission();
}
  

void PT2258::writeWire(char a, char b){
  Wire.beginTransmission(PT2258_address);
  Wire.write (a);
  Wire.write (b);
  Wire.endTransmission();
}
