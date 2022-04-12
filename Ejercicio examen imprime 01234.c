#include <stdio.h>

int main(int argc, char *argv[]) {
	int c = 0, i = 0;
	printf("%d", c);
	while (i < 4 || c > 4) {
		printf("%d", ++i);
	}
	return 0;
}

