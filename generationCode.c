#include <stdio.h>
#include <stdlib.h>


void write(int a){
    FILE* fichier = NULL;
    fichier = fopen("C:\\Users\\rodri\\OneDrive\\Documents\\programme projet\\arduino\\main\\param.h", "w");
    if (fichier != NULL){
        fprintf(fichier, "#define MODE %d",a);
        fclose(fichier);
        printf("Le fichier a bien ete remplace");
    }
    else {
        printf("ERROR");
    }
}
