#ifndef __DESCRIPTEUR__DESCRIPTEUR_TEXTE_H__
#define __DESCRIPTEUR__DESCRIPTEUR_TEXTE_H__

#include "vector_terme.h"

/*
 Un descripteur de texte est composé :
 - d'un identifiant de type int,
 - d'une liste de termes de type vector_terme 
 - d'une variable mots de type int qui contient le nombre de mots
 */
typedef struct
{
    int id;
    vector_terme termes;
    int mots;
}descripteur_texte;

/*
 indice_mot_significatif :
 cette fonction permet de retourner l'indice du terme contenu dans un descripteur 
 passé en paramètre à partir d'un mot-clé passé lui aussi en paramètre.
 
 entrées :
 - char* mot_cle : critère de recherche de terme
 - descripteur_texte des : descripteur dans lequel on cherche un terme contenant le mot-clé
 
 retourne :
 - l'indice du terme si celui-ci est trouvé
 - -1 sinon
 */
int indice_mot_significatif(const descripteur_texte *des, const char* mot_cle);

/*
 indice_mot_significatif :
 cette fonction permet de retourner le nombre d'occurences d'un terme contenu dans un descripteur
 passé en paramètre à partir d'un mot-clé passé lui aussi en paramètre.
 
 entrées :
 - char* mot_cle : critère de recherche de terme
 - descripteur_texte des : descripteur dans lequel on cherche un terme contenant 
 le mot-clé pour renvoyer ensuite le nombre d'occurences de ce mot.
 
 retourne :
 - le nombre d'occurences d'un mot-clé dans un descripteur.
 */
int nombre_occurences_mot_cle(const descripteur_texte *des, const char* mot_cle);

#endif
