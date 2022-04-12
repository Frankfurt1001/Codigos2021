#include <stdio.h>

int main(int argc, char *argv[]) {
	int var = 0, i = 0;
	while(i==0)
		if(var%2==0)
		i=var++;
		else
			i=++var;
	printf("%d", var+i);
	return 0;
}

