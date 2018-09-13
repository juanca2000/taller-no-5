#include <iostream>
#include <stdio.h>
#include <string.h>
void inicio();
void vocales();
void chao();
int main() 
{
	inicio();
	vocales();
	
}
void inicio()
{
	printf("\n BIENVENIDO PROGRAMADOR \n");
	
}
void vocales()
{
	char palabra[40];
	int i,c=0;
	
	printf("\ndigite tu nombre\n");
	gets (palabra);
	
	for(i=0;i<30;i++){
		switch (palabra[i]){
		case 'a': c=c+1;
		    break;
		case 'e': c=c+1;
		    break;
		case 'i': c=c+1;
		    break;
		case 'o': c=c+1;
		    break;
		case 'u': c=c+1;
            break;		
		}
	}
	printf("\ntotal de vocales encontradas es",i);
}
void chao()
{
	printf("\n GRACIAS POR PARTICIPAR \n"); 
}
