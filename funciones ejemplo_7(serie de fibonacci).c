#include <stdio.h>
int fibo(int n)
{
	if (n == 0 || n == 1){
	return n;
	}
	else{
	return fibo(n-1) + fibo(n-2);
	}
}
int main(int argc, char *argv[]) {
	int elementos; 
	do{
	printf("Ingrese el numero de elementos\n");
	 scanf("%d", &elementos);
	} while(elementos <= 0);
	
	printf("\nSerie fibonacci\n");
	
	for(int i = 0; i < elementos; i++){
	
	printf(" %d,  ", fibo(i));
	}
	
	return 0;
}

