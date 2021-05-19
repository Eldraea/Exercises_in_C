/*
exercise3.c
--------------
by eldr@e@
--------------
Consigne: Créer un programme qui permet d'afficher une liste de variables parmi la liste suivante( int, long, short, float, double et char).
L'objectif sera alors d'afficher le contenu de la variable ainsi que la taille qu'elle occupe en mémoire.
---------------
Created on: 28/09/2020
---------------
Last updated on: 28/09/2020

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myInt = 42;
    long myLong = 42424242;
    short myShort = 4;
    float myFloat = 4.242424242;
    double myDouble = 4.24242424242424242424242;
    char myChar= 'S';

    printf("Mon int = %d et fait %d octets\n", myInt, sizeof(myInt));
    printf("Mon long =%ld et fait %d octets\n", myLong, sizeof(myLong));
    printf("Mon short = %d et fait %d octets\n", myShort, sizeof(myShort));
    printf("Mon float = %f et fait %d octets\n", myFloat, sizeof(myFloat));
    printf("Mon double = %.12f et fait %d octets\n", myDouble, sizeof(myDouble));
    printf("Mon char= %c et fait %d octets\n", myChar, sizeof(myChar));

    return 0;
}
