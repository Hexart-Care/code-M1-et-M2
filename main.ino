#include "cardio.h"
#include "coeur.h"


int temps = 0, nbPuls, tab[12];
int moyenne2 = 0, i = 0, j = 0;

void setup() {

  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
for(i; i < 12; i++){
  nbPuls = cardio();
  tab[i] = nbPuls;
  Serial.print(nbPuls);
  temps = temps + 5;
  Serial.print(';');
  Serial.println(temps);
}

for (j; j <1; j++){
  moyenne2 = moyenne(tab, 12);
}
  coeur(moyenne2);
}
