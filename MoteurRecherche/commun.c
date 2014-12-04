#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "commun.h"

#define FICHIER_TEMPORAIRE "/Users/Maxime/Desktop/recherche/tmp"
#define TAILLE_ID 4 // identifiant maximal 9999
#define TAILLE_COMMANDE 100

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
int nom_fichier_par_identifiant_descripteur(int identifiant, const char* liste_base, char* nom_fichier){
    char commande[TAILLE_COMMANDE]="";
    char str_id[TAILLE_ID]="";
    
    /*
     Construction de la commande qui permet de récuperer la ligne où se trouve l'identifiant à chercher
     grâce à la commande unix grep et d'écrire le résultat dans un fichier temporaire.
     */
    strcpy(commande, "grep ");
    sprintf(str_id, "%d",identifiant);
    strcat(commande, str_id);
    strcat(commande, " ");
    strcat(commande, liste_base);
    strcat(commande, " > ");
    strcat(commande, FICHIER_TEMPORAIRE);
    system(commande);
    
    /*
     Ensuite on va récuper la valeur du nom en ouvrant le fichier et lisant une chaine de caractère.
     */
    FILE * f;
    f=fopen(FICHIER_TEMPORAIRE, "r");
    fscanf(f, "%s", nom_fichier);
    fclose(f);
    
    /*
     Création de la commande permettant de supprimer le fichier temporaire.
     */
    strcpy(commande, "rm ");
    strcat(commande, FICHIER_TEMPORAIRE);
    system(commande);
    
    // On vérifie que le nom du fichier ne soit pas nul.
    if (strlen(nom_fichier) > 0)
        return 1;
    return 0;
}