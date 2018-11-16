int cardio(){
  int nbPuls;
  int temps = 0 ;
  nbPuls = 0;

  while(temps != 5000){
  long nombre = random(405,481); //ici je simule un capteur infrarouge captant une valeur entre 405 et 480 
  delay(100);
  temps = temps + 100;
  
  if (nombre > 470){ //cette fonction sert a incrémenter nbPuls le nombre de pulsation a chaque fois que notre capteur capte une valeur au dessu de 470
    nbPuls++; 
    }    
  }

  nbPuls *= 12;
  return nbPuls;
  
}

int moyenne(int *tab, int taille)
{
  int moyenne = 0;
  for(int i = 0; i <= taille; i++){
    moyenne = moyenne + tab[i]; 
  }
  moyenne = moyenne / taille;
  return moyenne - 1;
}
