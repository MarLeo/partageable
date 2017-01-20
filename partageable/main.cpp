#define WINDOWS_LEAN_AND_MEAN
#include <windows.h>
#include <iostream>

#include "composant1.h"
#include "composant2.h"

int main(int argc, char * argv)
{
	int data1=3;
	int data2=5;

	int valeur1;
	int valeur2;

	valeur1=composant1(data1,data2);

	valeur2=composant2(data1,data2);

	std::cout << getComposant1Version() << std::endl;
	std::cout << "valeur 1 :" << valeur1 << " valeur 2 :" << valeur2 << std::endl;
	Sleep(1000);
	system("pause");

}
