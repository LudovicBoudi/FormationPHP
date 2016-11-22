/* Afficher le code ASCII et Hexa des caracteres */

#include <stdio.h>

void main()
{
	char Caractere;
	/* Affichage des lettres majuscules */
	for (Caractere = 'A', Caractere <= 'Z', Caractere++)
	{
		printf ("la lettre = %c \t equivaut en ASCII a %d \t et en hexa a %x . \n", Caractere, Caractere, Caractere);
	}
	/* Affichage des lettres minuscules */
	for (Caractere = 'a', Caractere <= 'z', Caractere++)
	{
		printf ("la lettre = %c \t equivaut en ASCII a %d \t et en hexa a %x . \n", Caractere, Caractere, Caractere);
	}
	/* Affichage des chiffres */
	for (Caractere = '1', Caractere <= '9', Caractere++)
	{
		printf ("le caractere = %c \t equivaut en ASCII a %d \t et en hexa a %x . \n", Caractere, Caractere, Caractere);
	}
}