#include <stdio.h>

int main(int argc, char *argv[]) {
	int n = 10;
	for( int i = 0; n >i; i++){
		printf("$");
		n-=2;
	}
	printf("%d\n", n );
	return 0;
}

