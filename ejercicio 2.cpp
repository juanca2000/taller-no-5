#include <iostream>
#include <stdio.h>
#include <conio.h>

void mult();
void nombre_programa();
void chao();
int main()
{
	nombre_programa();
	mult();
	chao();
}
void nombre_programa()
{
	printf("\n             BIENVENIDOS PROGRAMADORES\n");
	printf("\n EN EL DIA DE HOY LES VENGO A TRAER LA MULTIPLICACION DE DOS NUMEROS\n");
}
void mult()
{
	float num1,num2;
	int mult;
	
	printf("\n  Digite un numero\n");
	scanf ("%f", &num1);
	printf ("\n Digite otro numero\n");
	scanf ("%f", &num2);
	
	mult = (num1*num2);
	
	printf ("\n El resultado es : %2.f\n", mult);
}
void chao ()
{
	printf("\n GRACIAS POR PARTICIPAR 'CHAO'\n "); 
}


