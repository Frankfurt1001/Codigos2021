#include <stdio.h>

int main(int argc, char *argv[]) {
	float num1, num2, num3;
	int cont=1;
	
	while(cont==1)//mientras que la variable cont=1, ejecutara lo siguiente
		
	{
	printf("este programa indicara el mayor de tres numeros\n\n");
	printf("ingrese el primer numero\n\n");
	scanf("%f", &num1);
	printf("ingrese el segundo numero\n\n");
	scanf("%f", &num2);
	printf("ingrese el tercer numero\n\n");
	scanf("%f", &num3);
	
	if(num1>num2 && num1>num3)
	{
		printf("\n\n El numero %.2f es el mayor de los 3 numeros\n\n", num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("\n\n El numero %.2f es el mayor de los 3 numeros\n\n", num2);
	}
	else if(num3>num1 && num3>num2)
	{
		printf("\n\n El numero %.2f es el mayor de los 3 numeros\n\n", num3);
	}
	 if(num1==num2 && num2==num3)
	{
		printf("\n\n los numeros son iguales.\n\n");
	}
	 printf("\n\n Fin del programa\n\n");
	 printf("\n\n Escriba 1 si desea que se repita el programa, o 0 si quiere que finalize\n\n");//para ver si quieres repetir el programa, o cambiar la variable cont y no repetirlo
	 scanf("%d", &cont);
}
	
		   
	
	return 0;
}

