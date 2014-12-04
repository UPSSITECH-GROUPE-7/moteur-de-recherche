#ifndef __Outils__cellule__
#define __Outils__cellule__

/*
 Structure qui représente une cellule générique.
 */
typedef struct Cellule
{
    void* info;
    struct Cellule * suiv;
} Cellule;

#endif
