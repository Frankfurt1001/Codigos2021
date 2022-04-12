#include <stdio.h>

int main(int argc, char *argv[]) {
	int n = 0, i;
	for( i = 10; i > n; i--){
		printf("#");
		n++;
	}
	printf(" %d ", n);
	printf(" %d ", i);
	return 0;
}

