#include <iostream>
#include <stdio.h>
#include <conio.h>
void hola();
void numero_mayor();
int main()
{
	hola();
	numero_mayor();
}
void hola()
{
	printf("\n               BIENVENIDOS PROGRMADORES\n");
	printf ("  \nPARA ESTE PROGAMA IDENTIFICAREMOS CUAL ES EL MAYOR\n DE 3 NUMEROS ENTEROS\n");
}
void numero_mayor()
{
	int v1, v2, v3;
	printf ("\ndigite un numero\n");
	scanf ("%d", &v1);
	printf ("\ndigite otro numero\n");
	scanf ("%d", &v2);
	printf ("\ndigite otro numero\n");
	scanf ("%d", &v3);

	if ( v1 > v2 ){
		printf ("el mayor es v1");
		printf ("el mayor es v2");
	}
	if ( v1 > v3 ) {
		printf ("el mayor es v1");
		printf ("el mayor es v3");
                 }
	
}
