#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("Calculadora de masa corporal(BMI)\n\n");
	float peso,altura,bmi;
		printf("Ingrese su peso en kg\t\t");
		scanf("%f", &peso);
		printf("Ingrese su estatura en metros\t\t");
		scanf("%f", &altura);
		bmi=peso/(altura*altura);
			printf("\n\n Su BMI es de:%.2f\n\n", bmi);
		
		printf("Con esto, tengamos en cuenta la siguiente tabla\n");
		
		printf("1_Bajo peso: menos de 18,5\n");	
		printf("2_Normal: entre 18,5 y 24,9\n");
		printf("3_Sobrepeso: entre 25 y 29,9\n");
		printf("4_Obeso:30 o mas\n");
	return 0;
}

