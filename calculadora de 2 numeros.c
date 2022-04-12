#include <stdio.h>

int main(int argc, char *argv[]) {
	float num1,num2,resul;
	int oper;
	int repet;
    int i;
	do{
		printf("-----------Calculadora-----------\n");
		printf("\n*ingrese los numeros a operar, separados por un espacio(en el orden que se trabajara)\n");
		printf("\t");
		scanf("%f", &num1);
		printf("\t");
		scanf("%f", &num2);
		printf("\n*Ahora escoja la operacion que desee hacer\n");
		printf("1_suma\n2_resta\n3_multiplicacion\n4_division\n");
		printf("\t");
		scanf("%d", &oper);
		switch (oper){
		case 1 :
			resul= num1 + num2;
			printf("\n %.1f+%.1f=%.1f \n", num1, num2, resul);
			break;
		case 2 :
			resul= num1 - num2;
			printf("\n%.1f-%.1f=%.1f\n", num1, num2, resul);
			break;
		case 3 :
			resul= num1 * num2;
			printf("\n%.1f*%.1f=%.1f\n", num1, num2, resul);
			break;
		case 4 :
			resul= num1 / num2;
			printf("\n%.1f/%.1f=%.1f\n", num1, num2, resul);
			break;
		}
		printf("\ndesea ingresar otros numeros a operar?\n");
		printf("\n1_continuar\n 2_salir");
		
		scanf("%d", &i);
		if(i==1)
			repet=1;
		if(i==2)
			repet=0;
		
	} while(repet==1);
	

	
	
	return 0;
}

