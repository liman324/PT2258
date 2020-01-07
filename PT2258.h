// liman324@yandex.ru rcl-radio.ru


#ifndef PT2258_H
#define PT2258_H

#define PT2258_address 0b1000100


#include <Arduino.h>
class PT2258
{
  public:
    PT2258();
        void setVolume(int vol); //  int 0...79     
	void setVol1(int v1); //  int 0...79       
	void setVol2(int v2); //  int 0...79 
        void setVol3(int v3); //  int 0...79 
        void setVol4(int v4); //  int 0...79 
        void setVol5(int v5); //  int 0...79 
        void setVol6(int v6); //  int 0...79 
        void setMute(int mute);//
	
  private:
	void writeWire(char a);
};
	
#endif //PT2258_H
