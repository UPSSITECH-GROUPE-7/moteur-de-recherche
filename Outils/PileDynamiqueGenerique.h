#ifndef __file_generique__PileDynamiqueGenerique__
#define __file_generique__PileDynamiqueGenerique__

#include "Cellule.h"

typedef struct {
    size_t type;
    int taille;
    Cellule* tete;
} Pile;

void init_pile (Pile* p, size_t s);
void afficher_pile (const Pile* p);
int pile_est_vide (const Pile* p);
int taille_pile(const Pile* p);
void empiler (Pile* p,void* e);
int depiler (Pile* p, void* e);

#endif
