#include <stdio.h>
int max( int a, int b){
if (a>b)
	return a;
else 
	return b;
}
int main(int argc, char *argv[]) {
	printf("El mayor es %d\n", max(4,5));
	
	return 0;
}

