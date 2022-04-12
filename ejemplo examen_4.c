#include <stdio.h>

int main(int argc, char *argv[]) {
	int i = 10, n = 0;
	while(n<i){
		n+=3;
		printf("#");
		i/=2;
	}
	printf(" %d\n", i);
	return 0;
}

