#include <stdio.h>

int main(int argc, char *argv[]) {
	int a = 5, b = 2, c = 6;
	int max;
	
	max = a>b?a>c?a:c:b>c?b:c;
	
	printf("El mayor es %d\n", max);
	
	return 0;
}

