#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("este programa sirve para encriptar un numero\n");
	int n, u, dec, cen, um;
	int i;
	do{
		printf("\n ingrese el numero a encriptar \t");
		scanf("%d", &n);
		
		if(n>=1000 && n<=9999){//numeros de 4 cifras
			u=(n+7)%10;//calcula el encriptado de la unidad
			dec=((n/10)+7)%10;//calcula el encriptado de la decena
			cen=((n/100)+7)%10;//calcula el encriptado de la decena
			um=((n/1000)+7)%10;//calcula el encriptado de la unidad de mil
			printf("\n Su numero encriptado es:%d%d%d%d\t", dec, u, um , cen );//lo reordena
			i=0;//para valuar i=0 y que no se repita
		}
		else {
			printf("\n\n El numero ingresado no es valido,");
			printf(" tenga en cuenta que el mismo debe ser de 4 cifras\n\n");
			i++;//para valuar i=0 y que se repita
		}
	}while(i!=0);
	return 0;
}

