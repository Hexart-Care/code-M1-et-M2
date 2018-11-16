#include "param.h"

int a, led;

void coeur(int bpm){
  
    if (MODE==0){ //juste BPM
          for(a = 2; a<12; a++){
            digitalWrite(a, HIGH);
          }
        delay(200);
          for(a = 2; a<12; a++){
            digitalWrite(a, LOW);
         }
        delay(60000/bpm);
       // Serial.print(bpm);
      }
      
      if (MODE==1){ //chenille
          for (a = 2; a<12; a++){
            digitalWrite(a, HIGH);
            delay(60000/bpm);
            digitalWrite(a,LOW);
          }
      }
      
      if (MODE==2){ //1 sur 2
        i = 2;
          while (i != 14){
            digitalWrite(i, HIGH);
            i = i + 2;
          }
        delay(200);
        a = 2;
          while (a != 12){
           digitalWrite(a, LOW);
            a++;
          }
         delay(60000/bpm);
     }
     
      if (MODE==3){ // 1 sur 3
        i = 2;
          while( i != 14){
            digitalWrite(i, HIGH);
            i = i + 3;
          }
        delay(200);
        a = 0;
        while(a != 12){
        digitalWrite(a, LOW);
        a++;
        }
        delay(60000/bpm);
     } 
     
      if (MODE==4){ // 1 seule au choix
         led = 2;
         digitalWrite(led, HIGH);
         delay(200);
         digitalWrite(led, LOW);
         delay(60000/bpm);
     } 
     
     if (MODE==5){ // une seule random
        led = random(2,12);
        digitalWrite(led, HIGH);
        delay(200);
        digitalWrite(led, LOW);
        delay(60000/bpm);
     }
}
