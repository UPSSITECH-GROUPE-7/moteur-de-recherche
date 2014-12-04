#ifndef __MoteurRecherche__commun__
#define __MoteurRecherche__commun__

#include <stdio.h>

/*
 nom_fichier_par_identifiant_descripteur : 
 cette fonction permet de connaitre le nom d'un fichier à partir de l'identifiant d'un descripteur.
 
 entrées :
 - identifiant : identifiant du descripteur à chercher
 - liste_base : nom du fichier dans lequel se trouve les paires nom/id
 
 sortie :
 - nom_fichier : nom du fichier au quel est ssocié le descripteur
 - retourne 1 si nom trouvé, 0 sinon
 */
int nom_fichier_par_identifiant_descripteur(int identifiant, const char* liste_base, char* nom_fichier);

#endif