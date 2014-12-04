#ifndef __MoteurRecherche__resultat_texte__
#define __MoteurRecherche__resultat_texte__

#include <stdio.h>

typedef int descripteur_texte;

typedef struct{
    /*
     nom : correspond au nom du fichier
     */
    char* nom;
    /*
     poids :
     - si recherche par mot-clé : nombre d'occurances d'un mot-clé dans un descripteur de texte
     - si recherche par similarité : nombre de mot-clé en commun d'un descripteur de texte avec le descripteur courant
     */
    int   poids;
}resultat_texte;

/*
 afficher_resultat_texte :
 cette fonction permet d'affiche un résultat de type texte.
 
 entrée :
 - resultat_texte : résultat de type "Texte" à afficher
 */
void afficher_resultat_texte(const resultat_texte* r);

#endif
