#include <stdio.h>
#include <stdlib.h>

int affichage(){
    int a;
    printf("\n\n");
    printf("        -----------Bienvenue dans l'edition du coeur-------------               \n");
    printf("Pour que le coeur batte en fonction du BPM, rentrez 0\n");
    printf("Pour que le coeur face une chenille, rentrez 1\n");
    printf("Pour qu'une seule LED sur deux du coeur s'allume, rentrez 2\n");
    printf("Pour qu'une seule LED sur trois du coeur s'allume, rentrez 3\n");
    printf("Pour qu'une seule LED au choix du coeur s'allume, rentrez 4\n");
    printf("Pour qu'une seule LED random du coeur s'allume, rentrez 5\n");
    scanf("%d",&a);
    return a;
}
