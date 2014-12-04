/* Organisation générale du code */

/*
	Fichiers sources:
		- indexation_image.c
		- indexation_image.h
*/

/*
MAIN_EN_BREF
	1-Regarder les fichiers existants (dans liste_base_image);
	2-Regarder les descripteurs existants;
	3-Déterminer les fichiers à indexer (non-indexés);
	4-Si il y en a:
		5-Demander le nombre de bits pour la quantification;
		6-Pour chaque fichier:
			7-Choper la taille et le nombre de composantes;
			8-Pour chaque pixel:
				9-Effectuer la quantification (remplir la matrice correspondante);
			10-Créer un descripteur:
				11-Affecter un identifiant;
				12-Déterminer pour chaque valeur de quantification, le nombre de pixels correspondants (et remplir le tableau);
			13-Enregistrer le descripteur dans base_descripteur_image;
			14-Rajouter le nom du fichier indexé ainsi que son ID dans liste_base_image;
*/

/*
	Fonctions à développer:
		- réalisation de la quantification (étape 9)
		- affectation des identifiants (étape 11)
		- détermination des occurences (étape 12)
*/
