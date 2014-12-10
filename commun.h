#ifndef __RECHERCHE__COMMUN__
#define __RECHERCHE__COMMUN__

#include <stdio.h>
#include "liste_resultats_texte.h"

/*
 nom_fichier_par_identifiant_descripteur : 
 cette fonction permet de connaitre le nom d'un fichier à partir de l'identifiant d'un descripteur.
 
 entrées :
 - identifiant : identifiant du descripteur à chercher
 - liste_base : nom du fichier dans lequel se trouve les paires nom/id
 
 sortie :
 - nom_fichier : nom du fichier au quel est associé le descripteur
 - retourne 1 si nom trouvé, 0 sinon
 */
int nom_fichier_par_identifiant_descripteur(const char* liste_base, int identifiant, char* nom_fichier);

/*
 identifiant_descripteur_par_nom_fichier :
 cette fonction permet de connaitre l'identifiant d'un descripteur à partir du nom d'un fichier.
 
 entrées :
 - nom_fichier : nom du fichier à chercher
 - liste_base : nom du fichier dans lequel se trouve les paires nom/id
 
 sortie :
 - indentifiant : identifiant du descripteur au quel est associé le nom du fichier.
 - retourne 1 si nom trouvé, 0 sinon
 */
int identifiant_descripteur_par_nom_fichier(const char* liste_base, const char* nom_fichier, int* identifiant);

#endif