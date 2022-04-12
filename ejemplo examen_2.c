#include <stdio.h>

int main(int argc, char *argv[]) {
	int i= 20, m = 0;
	while( i>m){
		i/=2;
		printf(" %d ", i);
		m++;
	}
	return 0;
}

