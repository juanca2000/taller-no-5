#include <iostream>
#include <stdio.h>
#include <conio.h>
void inicio();
void arreglo_inicio();
void chao();
int main()
{
	inicio();
	arreglo_inicio();
	chao();
}
void inicio()
{
	
}
void arreglo_inicio()
{
	int arreglo[10],cantidad,mayor=0,menor,i;
	
	printf ("\n  CANTIDAD DE NUMERO \n");
	scanf("%d",&cantidad);
	
	for (i=0;i<cantidad;i++)
	{
		printf("numero %d: ",i+1);
		scanf("%d",&arreglo[i]);
		
		if (mayor<arreglo[i])
			mayor=arreglo[i];
	}
	menor=mayor;
	for(i=0;i<cantidad;i++)
	{
		if (menor>arreglo[i])
			menor=arreglo[i]; 
		}
	printf("el mayor es: %d\n",mayor);
	printf("el menor es: %d",menor);
}
void chao()
{
	
}
