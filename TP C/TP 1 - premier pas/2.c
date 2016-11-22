/* Déterminer le périmètre d'un cercle à partir de son rayon. */


#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

void main()
{
	double rayon; 
	double perimetre; 
	printf("Rayon = ");
	scanf("%lf", &rayon);
	perimetre = 2 * PI * rayon; 
	printf("Le périmètre est : %d \n", perimetre);
}