#include <stdlib.h> 
#include <stdio.h>
#define PI 3.1415 //déclaration d'une constante
int main(){
    int R = 15;
    float perimetre_cercle = 2*PI*R;
    float aire_cercle = PI*R*R;
    printf("Le périmètre du cercle vaut %f \n", perimetre_cercle);
    printf("L'aire du cercle vaut %f \n",aire_cercle);
    return EXIT_SUCCESS;
}
