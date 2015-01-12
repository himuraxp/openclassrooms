#include <stdio.h>

int carre(int nombre)
{
	int resultat = 0;
	resultat = nombre * nombre;
}
int main(int argc, char *argv)
{
	int racine = 0, racineTotal = 0;

	printf("Entrer la racine !\n");
	scanf("%d", &racine);

	racineTotal = carre(racine);
	printf("La racine faut %d\n", racineTotal);

	return 0;
}
