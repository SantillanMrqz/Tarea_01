//Libreria
#include<stdio.h>
#include<math.h>

//Funcion principal
int main(){
	
	float a;
	printf("Ingresar el valor de la variable a=");
	scanf("%f",&a);
	
	float b;
	printf("Ingresar el valor de la variable b=");
	scanf("%f",&b);
	
	float c;
	printf("Ingresar el valor de la variable c=");
	scanf("%f",&c);
	
	float d=b*b-4*a*c;
	
if(d>0.0){
	
	float variable_1=((b+sqrt(d))/(2.0*a));
	
	float variable_2=((b-sqrt(d))/(2.0*a));
	
printf("El valor de la primera raiz que es x1 es igual a= %.2f\n",variable_1);

printf("El valor de la segunda raiz que es x2 es igual a= %.2f\n",variable_2);
	}
	
else if (d<=0){
	
	printf("Error\n\n\n");
	
	printf("Fin del programa");
}	
	
	
}
