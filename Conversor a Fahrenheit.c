#include <stdio.h>
#define INICIO 0
#define FIN 300
#define INCREMENTO 20
int main(int argc, char *argv[]) {
	int Fahr;
	for(Fahr = INICIO; Fahr <= FIN; Fahr += INCREMENTO)
		printf("%d F -> %6.1f C\n", Fahr, (5.0/9.0)*(Fahr - 32));
	return 0;
}

