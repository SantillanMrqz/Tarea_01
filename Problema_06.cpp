//Libreria
#include<stdio.h>

//Funcion principal
int main(){
	
float a;
printf("Numerador.Coloque el numero= ");
scanf("%f",&a);

float b;
printf("Denominador.Coloque el numero= ");
scanf("%f",&b);

printf("El resultado de la division es =%.2f",a/b);

if(b==0){

printf("Error");}

}



