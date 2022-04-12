#include <stdio.h>

int main(int argc, char *argv[]) {
	int op = 0;
	while (op<3){
		switch(op){
		case 0:
			printf("a");
		case 1:
			printf("b");
			break;
		case 2:
			printf("c");
		case 3:
			printf("d");
			break;
		default:
			printf("e");
	}
		op++;
	}
	return 0;
}

