#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("\n\n esta calculadora sirve para pasar de grado celsius a fahrenheit y viceversa\n\n");
	int a;
	int b;
	int i;
	float cel, far;
	for(i=1; i<=3;i++){
		printf("\n\n farenheit=0\n celsius=1\n");
		
	printf("\n\n ingrese en que unidad quiere trabajar\n\n");
	scanf("%d", &a );
	
	if (a=0){
		printf("\n\n Ingrese el valor en farenheit\n\n");
		scanf("%d", &b);
		cel= (b-32)/1.8;
			printf("\n\n el valor expresado en celsius es:%.2f\n\n", cel);	
	}
	if (a=1){
		printf("\n\n Ingrese el valor en celsius\n\n");
		scanf("%d", &b);
		far= (b*1.8)+32;
			printf("\n\n el valor expresado en fahrenheit es:%.2f\n\n", far);	
	}	
	}
	return 0;
}

