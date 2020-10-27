//Libreria
#include<stdio.h>

//Funcion principal
int main(){

int a, radio;
printf("Coloque el valor del radio de su circunferencia=");
scanf("%d",&a);

float pi=3.1416;
printf("Area de su circunferencia=%.3f\n",pi*a*a);

printf("Perimetro de su circunferencia=%.3f\n\n\n",2*pi*a);

printf("Fin del programa");

}

