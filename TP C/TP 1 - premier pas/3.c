/* Produit de deux entiers */

#include <stdio.h>

void main()
{
	int Valeur1;
	int Valeur2;
	int Resultat;
	
	printf ("Veuillez saisir la premiere valeur : \n");
	scanf("%d", Valeur1);
	printf ("Veuillez saisir la seconde valeur : \n");
	scanf("%d", Valeur2);
	Resultat = Valeur1 * Valeur2;
	printf("Le resultat du produit est : %d", Resultat);
}