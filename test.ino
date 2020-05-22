#include <Wire.h>
#include <PT2258.h>

PT2258 pt;

void setup() {
 pt.clear(); 
 audio();
}

void loop() {

}

void audio(){
        pt.setVolume(79); //  int 0...79     
        //pt.setVol1(0); //  int 0...79       
        //pt.setVol2(0); //  int 0...79 
        //pt.setVol3(0); //  int 0...79 
        //pt.setVol4(0); //  int 0...79 
        //pt.setVol5(0); //  int 0...79 
        //pt.setVol6(0); //  int 0...79 
        pt.setMute(0); // mute 0 - off / 1 - on
  }
