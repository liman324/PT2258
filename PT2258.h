// liman324@yandex.ru rcl-radio.ru


#ifndef PT2258_H
#define PT2258_H

#define PT2258_address 0B1000100
#define CLEAR          0B11000000

#define VOL_MASTER_10  0B11010000
#define VOL_MASTER_1   0B11100000

#define VOL_1CH_10     0B10000000
#define VOL_1CH_1      0B10010000

#define VOL_2CH_10     0B01000000
#define VOL_2CH_1      0B01010000

#define VOL_3CH_10     0B00000000
#define VOL_3CH_1      0B00010000

#define VOL_4CH_10     0B00100000
#define VOL_4CH_1      0B00110000

#define VOL_5CH_10     0B01100000
#define VOL_5CH_1      0B01110000

#define VOL_6CH_10     0B10100000
#define VOL_6CH_1      0B10110000

#define MUTE           0B11111000


#include <Arduino.h>
class PT2258
{
  public:
    PT2258();
        void clear();
        void setVolume(int vol); //  int 0...79     
	void setVol1(int v1); //  int 0...79       
	void setVol2(int v2); //  int 0...79 
        void setVol3(int v3); //  int 0...79 
        void setVol4(int v4); //  int 0...79 
        void setVol5(int v5); //  int 0...79 
        void setVol6(int v6); //  int 0...79 
        void setMute(int mute);//
	
  private:
	void writeWire(char a, char b);
};
	
#endif //PT2258_H
