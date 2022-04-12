#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("este programa sirve para desencriptar un numero\n");
	int n, u, dec, cen, um, d;
	int i;
	do{//hacer mientras que......
		printf("\n ingrese el numero a deseencriptar \t");
		scanf("%d", &n);//pide el numero encriptado
		//digitos de derecha a izquierda
		u=(n-7)%10;//le resto 7
		dec=((n/10)-7)%10;//me muevo al 2do digito, le rsto 7 y y le saco modulo
		cen=((n/100)-7)%10;//me muevo al 3er digito, le resto 7 y le saco modulo
		um=((n/1000)-7+10)%10;//este, para que no de negativo con valores menores a 7
		//le tengo que sumar 10 para mantener la igualdad
		//de igual forma, el modulo no se ve afectado por 10, ya que toma el resto de dividir entre 10
		//que es el que agregamos, tomara lo que esta despues de la coma, y al dividir 16(ejm) solo tetomara 0.6*10, que es 6
		printf("\n Su numero encriptado es:%d%d%d%d\t", cen, um, u, dec);
		printf("\n\nDesea ingresar otro numero?\n");
		printf("\nPulse 1 para continuar en el programa, o cualquier otro numero para salir\t");
		scanf("%d", &d);
		if(d=1)
			i=1;
		else
			i=0;
	}while(i!=0);
	
	
	return 0;
}

