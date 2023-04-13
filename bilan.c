/** Squelette du programme **/
/*********************************************************************
 *  Auteur  : 
 *  Version : 
 *  Objectif : Conversion pouces/centimètres
 ********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define UN_POUCE 2.54 //declaration d'un pouce
int main()
{
    /* Saisir la longueur */
    float lg_cm;
    float lg_p;
    float valeur;
    char unite;
    printf("Entrer une longueur (valeur + unité) :");
    scanf("%f", &valeur);
    scanf("%c", &unite);
    /* Calculer la longueur en pouces et en centimètres */
    switch (unite) { 
        case 'p':
        case 'P':
            lg_p = valeur;
            lg_cm = lg_p * UN_POUCE;
            break;
        case 'c':
        case 'C':
            lg_cm = valeur;
            lg_p = lg_cm / UN_POUCE;
            break;
        case 'm':
        case 'M':
            lg_cm = valeur * 100;
            lg_p = lg_cm / UN_POUCE;
            break;
        default :
            lg_p = 0;
            lg_cm = 0;
            break;
        }
    /* Afficher la longueur en pouces et en centimètres */
    printf("%1.2f p = %1.2f cm",lg_p, lg_cm);
    return EXIT_SUCCESS;
}
