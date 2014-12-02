#ifndef file_generique_Cellule_h
#define file_generique_Cellule_h

typedef struct Cellule
{
    void* info;
    struct Cellule * suiv;
} Cellule;

#endif
