
#include "Composant4.h"
#include "Composant1Version.h"

// declaration des fonctions internes
int addition_interne(int a1, int a2);



int composant1(int p1, int p2)
{
	return addition_interne(p1,p2);
}

int addition_interne(int a1, int a2)
{
	return a1+a2;
}

char * getComposant1Version()
{
	return "Composant 1 version " COMPOSANT_VERSION_STR;
}
