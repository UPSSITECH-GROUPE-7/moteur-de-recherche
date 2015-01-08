#include "vector.h"
#include <stdlib.h>
#include <string.h>

/**
 INIT_CAPACITY : capacité initiale du vector.
 */
#define INIT_CAPACITY 10;


vector_t vector_new(size_t type)
{
    vector_t v;
    v.size = 0;
    v.capacity = INIT_CAPACITY;
    v.type = type;
    v.data = (void_t*)malloc(v.capacity * v.type);
    
    if (!v.data) { perror("vector_new() : malloc error"); exit(EXIT_FAILURE); }
    
    return v;
}

void vector_add(vector_t *v, void_t e){
    if (v->size >= v->capacity){
        v->capacity *= 2;
        v->data = realloc(v->data,  v->capacity * v->type);
        
        if (!v->data) { perror("vector_add() : realloc error"); exit(EXIT_FAILURE); }
    }
    
    v->data[v->size] = (void_t)malloc(v->type);
    memcpy(v->data[v->size], e, v->type);
    v->size++;
}

void_t vector_get(const vector_t* v, int i){
    if (i < 0 || i >= v->size) { perror("vector_get() : size error"); exit(EXIT_FAILURE); }
    return v->data[i];
}

void vector_free(vector_t* v){
    for (int i = 0; i < v->size; i++)
        free(v->data[i]);
    
    free(v->data);
    v = NULL;
}

void vector_sort(vector_t *v, int (*compare)(const void *, const void *)){
    int fin = 0;
    int taille = (int)v->size;
    
    while(!fin)
    {
        fin = 1;
        for(int i=0 ; i < taille-1 ; i++)
        {
            void_t e_1 = GET(*v, i);
            void_t e_2 = GET(*v, i+1);
            if (compare(e_1, e_2))
            {
                size_t size = v->type;
                void *const temp = malloc(size);
                
                if (temp == NULL) { perror("vector_sort() : malloc error"); exit(EXIT_FAILURE); }
                
                memcpy(temp, e_1, size);
                memcpy(e_1, e_2, size);
                memcpy(e_2, temp, size);
                
                free(temp);
                fin = 0;
            }
        }
        taille--;
    }
}

void vector_print(const vector_t *v, void (*afficher)(const void *)){
    for (int i = 0; i < v->size; i++) {
        afficher(v->data[i]);
    }
}

void vector_print_n(const vector_t *v, void (*afficher)(const void *), int n){
    int fin = (int)v->size < n ? (int)v->size : n;
    
    for (int i = 0; i < fin; i++) {
        afficher(v->data[i]);
    }
}