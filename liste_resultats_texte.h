#ifndef __LISTE__LISTE_RESULTATS_TEXTE_H__
#define __LISTE__LISTE_RESULTATS_TEXTE_H__

#include <stdio.h>

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

typedef struct structure_cellule{
    resultat_texte            info;
    struct structure_cellule* suiv;
}cellule_resultat_texte;


typedef cellule_resultat_texte* liste_ordonnee_resultat_texte;

/*
 init_liste_ordonnee_resultat_texte :
 cette fonction permet d'initialiser une liste ordonnée de résultats.
 
 entrée : 
 - liste_ordonnee_resultat_texte *l : liste à initialiser.
 
 sortie :
 - liste_ordonnee_resultat_texte *l : liste une fois initialisée.
 */
void init_liste_ordonnee_resultat_texte(liste_ordonnee_resultat_texte *l);

/*
 liste_ordonnee_resultat_texte_est_vide : 
 cette fonction permet de savoir si la liste passée en pararètre est vide.
 
 entrée : 
 - liste_ordonnee_resultat_texte *l : liste à tester.
 
 retourne :
 - 1 si la liste est vide
 - 0 sinon
 */
int liste_ordonnee_resultat_texte_est_vide(const liste_ordonnee_resultat_texte *l);

/*
 inserer_liste_ordonnee_resultat_texte :
 cette fonction permet d'insérer un résultat de type texte dans une liste ordonnée.
 
 entrées :
 - liste_ordonnee_resultat_texte l : liste à laquelle on va ajouter un élément.
 - resultat_texte e : résultat à ajouter à la liste.
 
 sortie :
 - liste_ordonnee_resultat_texte l : liste mise à jour.
 */
void inserer_liste_ordonnee_resultat_texte(liste_ordonnee_resultat_texte *l, resultat_texte e);

/*
 enlever_liste_ordonnee_resultat_texte :
 cette fonction permet d'enlever un élément d'une liste ordonnée.
 
 entrées :
 - liste_ordonnee_resultat_texte l : liste à laquelle on va enlever un élément.
 
 sortie :
 - liste_ordonnee_resultat_texte l : liste mise à jour.
 */
void enlever_liste_ordonnee_resultat_texte(liste_ordonnee_resultat_texte *l);

/*
 vider_liste_ordonnee_resultat_texte :
 cette fonction permet de vider une liste ordonnée passée en paramètre.
 
 entrée :
 - liste_ordonnee_resultat_texte l : liste à vider.
 */
void vider_liste_ordonnee_resultat_texte(liste_ordonnee_resultat_texte *l);

/*
 afficher_resultat :
 cette fonction permet d'afficher un résultat de type texte.
 
 entrée :
 - resultat_texte r : résultat à afficher.
 */
void afficher_resultat_texte(resultat_texte r);



#endif