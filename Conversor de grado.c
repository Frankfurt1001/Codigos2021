#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int a;
	int cont;
	int grado;
	int i;
	float cel,far,kel;
	printf("\n\n esta calculadora sirve para pasar de grado\n\n");
	
	printf("\n\n Cuantas veces desea hace conversiones?\n\n");
	do{
	scanf("%d", &cont);
	
	printf("_kelvin a celsius:1\n_kelvin a fahrenheit:2\n");
	printf("_fahrenheit a celsius:3\n_fahrenheit a kelvin:4\n");
	printf("_celsius a kelvin:5\n_celsius a fahrenheit:6\n");
	printf("pulse 7 para cerrar el programa\n");
	
	printf("\n\n ingrese en que unidad quiere trabajar\n\n");
	
		scanf("%d", &a );

		for(i=1;i<=cont;i++){
			
			if(a==1){
				printf("ingrese el valor en Kelvin para pasarlo a Celsius\n");
				scanf("%d", &grado);
				cel= grado-273.15;
				printf("\n\n el valor converitdo en celsius es:%.2f\n\n", cel);
			}
			if(a==2){
				printf("ingrese el valor en Kelvin para pasarlo a fahrenheit\n");
				scanf("%d", &grado);
				far=((grado-273.15)*9/5)+32;
				printf("\n\n el valor convertido en fahrenheit es:%.2f\n\n",far);
			}
			if(a==3){
				printf("ingrese el valor en fahrenheit para pasarlo a celsius\n");
				scanf("%d", &grado);
				cel=((grado-32)*5/9);
				printf("\n\n el valor convertido en celsius es:%.2f\n\n", cel);
			}
			if(a==4){
				printf("ingrese el valor en fahrenheit para pasarlo a kelvin\n");
				scanf("%d", &grado);
				kel=grado-32*5/9+273.15;
				printf("\n\n el valor convertido en fahrenheit es:%.2f\n\n",kel);
			}
			if(a==5){
				printf("ingrese el valor en celsius para pasarlo a kelvin\n");
				scanf("%d", &grado);
				kel=grado+273.15;
				printf("\n\n el valor convertido en kelvin es:%.2f\n\n", kel);
			}
			if(a==6){
				printf("ingrese el valor en celsius para pasarlo a fahrenheit\n");
				scanf("%d", &grado);
				far=(grado*5/9)+32;
				printf("\n\n el valor convertido en fahrenheit es:%.2f\n\n", far);
			}
		}
		
	}
	while(a!=7);
	printf("Muchas gracias por usar este programa\n\n");

	return 0;}
