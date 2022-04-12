#include <stdio.h>
// suma acumulada es la suma del numero con los anteriores
//1 2 3 4  5 6 7 8 
//1 3 6 10 15
int comsum(int n){
	int resultado;
		if( n == 1)
		resultado = 1;
		else
		resultado = n + comsum(n-1);
return resultado;
}
int main(int argc, char *argv[]) {
	printf("%d\n", comsum (4));//suma el 4 mas la suma de los numeros anteriores al mismo
	
	return 0;
}

