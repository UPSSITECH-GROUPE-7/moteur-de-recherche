#ifndef __DESCRIPTEUR__TERME_H__
#define __DESCRIPTEUR__TERME_H__

#define TAILLE_MAX_MOT 20

/*
 On définit un mot par un tableau de caractètes d'une taille maximale : TAILLE_MAX_MOT
 */
typedef char mot[TAILLE_MAX_MOT];

/*
 On définit la structure terme qui est composé d'un mot au quel est associé le nombre d'occurences de celui-ci dans le texte
 */
typedef struct {
    mot mot;
    int occurences;
}terme;

/*
 afficher_terme :
 cette fonction permet d'afficher un terme.
 
 entrées :
 - terme : le terme à afficher
 */
void afficher_terme(const terme* t);

#endif
