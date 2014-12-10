#ifndef __VECTOR__VECTOR_DESCRIPTEUR_TEXTE_H__
#define __VECTOR__VECTOR_DESCRIPTEUR_TEXTE_H__

#include <stdio.h>

#include "descripteur_texte.h"

typedef struct
{
    descripteur_texte*  data;
    size_t  capacity;
    size_t  size;
} vector_descripteur_texte;

/*
 vector_descripteur_texte_new :
 cette fonction permet de créer un vector de type descripteur de texte.
 
 retourne :
 - un vector de type descripteur de texte.
 */
vector_descripteur_texte vector_descripteur_texte_new();

/*
 vector_descripteur_texte_add :
 cette fonction permet d'ajouter un élément de type descripteur de texte au vector.
 
 entrées :
 - vector_terme v : vector auquel on va ajouter un élément.
 - descripteur_texte element: élément à ajouter.
 
 sortie :
 - vector_terme v : vector mis à jour.
 */
void vector_descripteur_texte_add(vector_descripteur_texte* v, const descripteur_texte* element);

/*
 vector_descripteur_texte_get :
 cette fonction permet de retourner le descripteur de texte d'un vector à l'indice i.
 
 entrées :
 - int i : indice de l'élément à retourner
 - vector_descripteur_texte v : vector à partir duquel on va retourner le terme.
 
 retourne :
 - le descripteur à l'indice i
 
 /!\ prérequis : i < taille du vector
 */
descripteur_texte* vector_descripteur_texte_get(const vector_descripteur_texte* v, int i);

/*
 vector_descripteur_texte_free :
 cette fonction permet de libérer la mémoire du vector.
 
 entrée :
 - vector_descripteur_texte v : vector à libérer.
 */
void vector_descripteur_texte_free(vector_descripteur_texte* v);

#endif
