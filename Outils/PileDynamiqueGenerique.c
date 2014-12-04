#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "PileDynamiqueGenerique.h"

/*
 init_pile :
 cette fonction permet d'initialiser une pile dynamique générique.
 
 entrée :
 - size_t : taille de la donnée que l'on va stocker
 
 sortie :
 _ Pile : pile générique
 */
void init_pile(Pile* p, size_t s){
    p->type = s;
    p->taille = 0;
    p->tete = NULL;
}

/*
 pile_est_vide :
 cette fonction permet de savoir si la pile est vide ou non.
 
 entée :
 - Pile : pile dont on veut savoir si elle est vide
 
 retourne 1 si la pile est vide, 0 sinon
 */
int pile_est_vide(const Pile* p){
    return p->taille == 0;
}

/*
 empiler :
 cette fonction qui permet d'empiler un élément.
 
 entrées :
 - void* : adresse de l'élément à empiler
 - Pile* : adresse de la pile
 
 sorties :
 - Pile* : adresse de la pile avec le nouvel élément
 */
void empiler(Pile* p, void* e){
    Cellule *tmp;
    
    tmp = (Cellule*)malloc(sizeof(struct Cellule));
    memcpy(&(tmp->info), e, p->type);
    tmp->suiv = p->tete;
    p->tete = tmp;
    p->taille++;
}

/*
 depiler :
 cette fonction qui permet depiler un élément.
 
 entrées :
 - void* : adresse de l'élément dépilé
 - Pile* : adresse de la pile
 
 sorties :
 - Pile* : adresse de la pile avec l'élément dépilé
 
 retourne 0 si la fonction dipiler n'a pas fonctionnée, 1 sinon
 */
int depiler(Pile* p, void* e){
    Cellule* tmp;
    
    if (pile_est_vide(p))
        return 0;
    
    tmp = p->tete;
    memcpy(e, &(p->tete->info), p->type);
    p->tete=p->tete->suiv;
    free(tmp);
    p->taille--;
    
    return 1;
}

/*
 taille_pile :
 cette fonction retourne la taille de la pile passée en paramètre.
 
 entrée :
 - Pile : pile dont on veut connaitre la taille
 
 retourne la taille de la pile
 */
int taille_pile(const Pile* p){
    return p->taille;
}
