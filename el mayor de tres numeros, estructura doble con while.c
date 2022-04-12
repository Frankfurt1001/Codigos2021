#include <stdio.h>

int main(int argc, char *argv[]) {
	float num1, num2, num3;
	int con=0;
	printf("este programa indicara el mayor de tres numeros\n\n");
	while(con<=2)
	{
	printf("ingrese el primer numero\n\n");
	scanf("%f", &num1);
	printf("ingrese el segundo numero\n\n");
	scanf("%f", &num2);
	printf("ingrese el tercer numero\n\n");
	scanf("%f", &num3);
	
	
		if (num1==num2==num3)//si son iguales
		{
			printf("\n\n Los numeros son iguales\n\n");
		}
		else if(num1>num2 && num1>num3)//si num1 es mayor
		{
			printf("\n\n El numero %.2f es el mayor de los 3 numeros\n\n", num1);
		}
		else if(num2>num1 && num2>num3)//si num2 es mayor
		{
			printf("\n\n El numero %.2f es el mayor de los 3 numeros\n\n", num2);
		}
		else if(num3>num1 && num3>num2)//si num3 es mayor
		{
			printf("\n\n El numero %.2f es el mayor de los 3 numeros\n\n", num3);
		}

		con++;//aumenta en 1 la variable
	}
	
	return 0;
}

