#ifndef __gestion_recherche__recherche__
#define __gestion_recherche__recherche__

#include "texte.h"

/*
 rechercher_texte_par_mot_cle :
 cette fonction retourne une lister ordonnée de résultats ainsi que le nombre de résultts en fonction
 du mot-clé passé en paramètre.
 
 entrées :
 - mot_cle : critère de recherche
 
 sortie :
 - liste_res : liste des résultats correspondants à la recherche
 retourne le nombre de résultats
 */
int rechercher_texte_par_mot_cle(const char* mot_cle, liste_ordonnee_resultat_texte* liste_res);

/*
 lister_resultat_contenant_mot_cle :
 cette fonction permet de lister les résultats correspondant à la recherche.
 
 entrées :
 - mot_cle : critère de recherche
 - les_descripteurs : tableau contenant tous les descripteurs de fichiers Texte
 - taille : correpond aux nombres de descripteurs contenus dans le tableau
 
 sortie :
 - liste_res : liste des résultats correspondants à la recherche
 retourne le nombre de résultats
 */
int lister_resultat_contenant_mot_cle(const char* mot_cle, vector_descripteur_texte* descripteurs_texte,liste_ordonnee_resultat_texte* liste_res);

/*
 afficher_resultats_recherche_par_mot_cle :
 cette fonction permet d'afficher un nombre défini ou pas de résultats 
 contenus dans une liste de résultats après une recherche par mot-clé.
 
 entrées :
 - mot_cle : critère de recherche
 - liste_resultats : liste contenant les résultats à afficher
 - nombre_affichage : nombre de résultats à afficher
 
 /!\ prérequis : nombre_affichage est inférieur ou égal à la taille de la liste.
 
 Si nombre_affichage est inférieur à 1, on affiche toute la liste.
 */
void afficher_resultats_recherche_par_mot_cle(const char* mot_cle, const liste_ordonnee_resultat_texte* liste_resultats, int nombre_affichage);



vector_descripteur_texte getDescripteursTexte();

#endif