#include <iostream>
#include <stdio.h>
#include <conio.h>
void numero_positivo();

void chao ();
int main()
{
	numero_positivo();
	chao ();
	
}
void numero_positivo()
{
	int num;
	printf ("\ndigite tu edad\n");
	scanf ("%d", &num);
	
	
	
		if (num>1){
			
			for(int i=1;i<=num;i++)
			printf ("\n%d\n",i);
		}
	}

void chao()
{
	printf ("\nGRACIAS POR PARTICIPAR\n");
}
