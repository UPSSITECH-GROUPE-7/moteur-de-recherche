#include "resultat_texte.h"
#include "commun.h"

// /users/dinf/pnj4756a/Projet_FIL_ROUGE_P1/IMG_RGB ou IMG_NG ou SON_CORPUS ou SON_REQUETE

#define LISTE_BASE_TEXTE "liste_base_texte"

/*
 afficher_resultat_texte :
 cette fonction permet d'affiche un résultat de type texte.
 
 entrée :
 - resultat_texte : résultat de type "Texte" à afficher
 */
void afficher_resultat_texte(const resultat_texte* r){
    printf("%s \t --> %d\n", r->nom, r->poids);
}