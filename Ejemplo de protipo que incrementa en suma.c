#include <stdio.h>

int contador(int);
int main(int argc, char *argv[]) {
	for (int i = 0; i < 5; i++){
		printf("%d \n", contador(4));
	}
	return 0;
}
int contador(int n){
	static int c = 0;
	return c+=n;
}

