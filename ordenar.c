#include <stdio.h>
#include <conio.h>
void OrdenarSeleccion(double numeros[6],int N);
int main(){
	int i;
	double numeros[6]={23, 78, 45, 8, 32, 56 };
	for(i=0;i<6;i++){
	printf("%f ascendente",numeros[i]);
	OrdenarSeleccion(numeros, 6);
}
getch();
return 0;
}

void OrdenarSeleccion(double numeros[6],int N)
{
int i, j,pos_min;
double tmp;
for (i=0; i<5; i++) {
pos_min=i;
for (j=i+1; j<6; j++)
if (numeros[j]<numeros[pos_min])
pos_min=j;
tmp=numeros[i];
numeros[i]=numeros[pos_min];
numeros[pos_min]=tmp;
}
}
