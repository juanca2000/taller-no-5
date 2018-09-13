#include <iostream>
#include <stdio.h>

void inicio();
void vocal();
void chao();
int main()
{
	inicio();
	vocal();
	chao();
}
void inicio()
{
	printf("\n BIENVENIDOS PROGRAMADOR\N");
	printf("\n EN ESTE PROGRAMA CALCULAREMOS LA \n CANTIDAD DE VOCALES HAY EN UNA \n PALABRA");
	
}
void vocal()
{
	char letra;
	printf("digite una letra que quieras\n");
	scanf("%c",&letra);
	
	if(letra=='a' && letra=='e' && letra=='i'  && letra=='o' && letra=='u')
	{
		printf("es una vocal");
	}else 
	    printf("no es una vocal");
		
}
void chao()
{
 printf("\n GRACIAS POR PARTICIPAR \n");
 }
