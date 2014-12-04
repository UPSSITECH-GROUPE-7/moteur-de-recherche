/* Raphaël Lefèvre: Indexation d'images */
#include "indexation_image.h"

void main(void)
{
	int comp,quantif,sizeX,sizeY ;  /* comp: nombre de composantes pour une image ; 
									   quantif: nombre de bits pour la quantification ;
									   sizeX: nombre de colonnes de l'image ; 
									   sizeY: nombre de lignes de l'image */
	char identifiant[20];		    // tableau pour l'identifiant du descripteur d'une image

	/* étapes 1,2,3,4,5,6,7 */

	int matrice_quantif_pixels[sizeX][sizeY];    /* matrice de la taille de l'image 
													dont les indices correspondent à chaque pixel et
												    dont le contenu correspond 
													à la valeur de quantification de chaque pixel */
	int occurences_quantif[2^(comp*quantif)];    /* tableau dont les indices correspondent 
													à chaque valeur de quantification et
													dont le contenu correspond au nombre de pixels 
													ayant la valeur de quantification spécifiée en indice */
}
