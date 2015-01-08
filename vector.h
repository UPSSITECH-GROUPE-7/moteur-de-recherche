#ifndef __VECTOR_VECTOR_H__
#define __VECTOR_VECTOR_H__

#include <stdio.h>

/**
 Ce macro permet de créer un nouveau vector.
 */
#define NEW(type)       vector_new(sizeof(type))

/**
 Ce macro qui permet d'ajouter un élément à un vector.
 */
#define ADD(v,e)        vector_add(&v, &e)

/**
 Ce macro permet de récuprer un élément du vector.
 */
#define GET(v,i)        vector_get(&v, i)

/**
 Ce macro permet de libérer un vector.
 */
#define FREE(v)         vector_free(&v)

/**
 Ce macro permet de trier un vector.
 */
#define SORT(type,v)    vector_sort(&v, compare_##type)

/**
 Ce macro permet d'afficher un vector.
 */
#define PRINT(type,v)    vector_print(&v, afficher_##type)

/**
 Ce macro permet d'afficher un vector.
 */
#define PRINT_N(type,v,n)    vector_print_n(&v, afficher_##type,n)

/**
 Création du type void_t à partir d'un void*.
 */
typedef void* void_t;

/**
 La structure d'un vector est définie ainsi :
 - *data : données du vector
 - capacity : capacité du vector
 - size : taille du type des données.
 */
typedef struct vector_s
{
    void_t  *data;
    size_t  capacity;
    size_t  size;
    size_t  type;
} vector_t;

/**
 Cette fonction permet de créer un nouveau vector.
 */
vector_t vector_new(size_t type);

/**
 Cette fonction permet d'ajouter un élément au vector.
 */
void vector_add(vector_t* v, void_t e);

/**
 Cette fonction permet de récuperer un élément à un certain rang passé en paramètre.
 */
void_t vector_get(const vector_t* v, int i);

/**
 Cette fonction permet de libérer un vector.
 */
void vector_free(vector_t* v);

/**
 Cette fonction permet de trier un vector.
 */
void vector_sort(vector_t *v, int (*compare)(const void *, const void *));

/**
 Cette fonction permet d'afficher un vector.
 */
void vector_print(const vector_t *v, void (*afficher)(const void *));

/**
 Cette fonction permet d'afficher n éléments d'un vector.
 */
void vector_print_n(const vector_t *v, void (*afficher)(const void *), int n);

#endif
