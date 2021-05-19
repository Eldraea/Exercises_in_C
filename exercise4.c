/*
exercise4.c
--------------
by eldr@e@
--------------
Consigne: 1- Faite en sorte de demander à l'utilisateur de rentrer son âge et sa taille au clavier
          2- Demander en plus deux caractères pour symboliser ses initiales
          3- Affichzer les informations dans un terminal
---------------
Created on: 28/09/2020
---------------
Last updated on: 28/09/2020

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
     int age;
     float taille;
     char prenom, nom;

    printf("Bonjour et bienvenue dans ce Quatrieme Exercice! \n\n\n");
    printf("Afin d'en savoir un peu plus sur vous, veuillez m'indiquer la premiere lettre de votre prenom:\n");
    scanf("%c", &prenom);
    fflush(stdin);

    printf("A present, veuillez nous indiquer la premiere lettre de votre nom de famille:\n\n");
    scanf("%c", &nom);
    fflush(stdin);
    printf("Veuillez a présent indiquer votre age:\n\n");
    scanf("%d",&age);
    fflush(stdin);
    printf("Enfin veuillez indiquer votre taille s'il vous plait\n");
    scanf("%f", &taille);

    printf("Vous etes %c.%c, vous avez %d ans, et vous mesurez %.2f metres", toupper(prenom),toupper(nom), age, taille);

}
