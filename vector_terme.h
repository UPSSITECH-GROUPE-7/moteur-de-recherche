#ifndef __VECTOR__VECTOR_TERME_H__
#define __VECTOR__VECTOR_TERME_H__

#include <stdio.h>
#include "terme.h"

typedef struct
{
    terme*  data;
    size_t  capacity;
    size_t  size;
} vector_terme;

/*
 vector_terme_new : 
 cette fonction permet de créer un vector de type terme.
 
 retourne :
 - un vector de type terme.
 */
vector_terme vector_terme_new();

/*
 vector_terme_add :
 cette fonction permet d'ajouter un élément de type terme au vector.
 
 entrées :
 - vector_terme v : vector auquel on va ajouter un élément.
 - terme element: élément à ajouter.
 
 sortie :
 - vector_terme v : vector mis à jour.
 */
void vector_terme_add(vector_terme* v, const terme* element);

/*
 vector_terme_get :
 cette fonction permet de retourner le terme d'un vector à l'indice i.
 
 entrées :
 - int i : indice de l'élément à retourner
 - vector_terme v : vector à partir duquel on va retourner le terme.
 
 retourne :
 - le terme à l'indice i
 
 /!\ prérequis : i < taille du vector
 */
terme vector_terme_get(const vector_terme* v, int i);

/*
 vector_terme_free : 
 cette fonction permet de libérer la mémoire du vector.
 
 entrée :
 - vector_terme v : vector à libérer.
 */
void vector_terme_free(vector_terme* v);

#endif
