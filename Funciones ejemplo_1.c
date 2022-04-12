#include <stdio.h>
//si alguno de los dos numeros es cero, que devuelva 0
int division_entera( int n, int d){
	int resultado;
	if( n==0 || d ==0)
		resultado=0;
	else
		resultado = n/ d;
return resultado;
}
int main(int argc, char *argv[]) {
	printf("El resultado de la division es %d\n", division_entera( 5,0));//es division entera
	
	/*printf("El resultado de la division es %.2f\n", 5/0.0);//imprime infinito*/
	return 0;
}

