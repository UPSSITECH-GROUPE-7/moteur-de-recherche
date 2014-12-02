#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "PileDynamiqueGenerique.h"


void init_pile(Pile* p, size_t s){
    p->type = s;
    p->taille = 0;
    p->tete = NULL;
}

void afficher_pile(const Pile* p){
    Cellule* tmp = (p->tete);
    int e;
    
    printf("[ ");
    if (!pile_est_vide(p)){
        while (tmp != NULL){
            e=(int)tmp->info;
            printf("%d ", e);
            tmp = tmp->suiv;
        }
    }
    printf("]\n");
}

int pile_est_vide(const Pile* p){
    return p->taille == 0;
}

void empiler(Pile* p, void* e){
    Cellule *tmp;
    
    tmp = (Cellule*)malloc(sizeof(struct Cellule));
    memcpy(&(tmp->info), e, p->type);
    tmp->suiv = p->tete;
    p->tete = tmp;
    p->taille++;
}

int depiler(Pile* p, void* e){
    Cellule* tmp;
    
    if (pile_est_vide(p))
        return EXIT_FAILURE;
    
    tmp = p->tete;
    memcpy(e, &(p->tete->info), p->type);
    p->tete=p->tete->suiv;
    free(tmp);
    p->taille--;
    
    return EXIT_SUCCESS;
}

int taille_pile(const Pile* p){
    return p->taille;
}
