#include <stdio.h>
// 0, 1, 1, 2, 3, 5, 8, 8, 13, 21, 34
int c = 0;
int fibo(int n){// estas funciones recursivas, ocupan muchisima memoria
	//dicha funcion no termina hasta que llega al caso base, y no libera la memoria
	c++;
	if(n == 0)
		return 0;
	if(n ==1)
	return 1;
	return fibo(n-1) + fibo(n-2);
}
int main(int argc, char *argv[]) {
	for(int i = 0; i < 10; i++){
	printf("%d, ", fibo(i));
	}
	printf("\n%d\n", c);// cuantas veces es llamada la funcion
	return 0;
}

