#include <iostream>
#include <stdio.h>
#include <conio.h>

void tiempo(int,int&,int&,int&);
int main(){
	int totalseg,horas,minutos,segundos;
	
	printf("digite el numero total de segundos: ");
	scanf ("%d",&totalseg);
	
	tiempo(totalseg,horas,minutos,segundos);
	
	printf ("tiempo relativo de la cantidad de segundos digitados");
	printf(" horas: ",horas);
	
	printf(" minutos: ",minutos);
	
	printf (" segundos: ",segundos);
	
	getch();
	return 0;
}
void tiempo(int totalseg,int& hor,int& min,int& seg)
{
	hor=totalseg/3600;
	totalseg %= 3600;
	min = totalseg/60;
	seg = totalseg%60;
}
