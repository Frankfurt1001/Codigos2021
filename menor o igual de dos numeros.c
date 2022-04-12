#include <stdio.h>

int main(int argc, char *argv[]) {
	float a,b;
	printf("este programa indicara el menor de dos numeros, o si son iguales\n\n");
		printf("ingrese un numero\n\n");
		scanf("%f", &a);
		printf("ingrese otro numero\n\n");
		scanf("%f", &b);
		if (a<b)
		{
			printf("\n\n el numero %.2f es menor que %.2f\n\n", a, b);
		}
		
		if (a==b)
		{
			printf("\n\n el numero %.2f es igual que %.2f\n\n", a, b);
        }
		if (b<a)
		{
			printf("\n\n el numero %.2f es menor que %.2f\n\n", b, a);
		}
		
		
	return 0;
}

