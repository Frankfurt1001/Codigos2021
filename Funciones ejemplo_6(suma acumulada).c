#include <stdio.h>
int suma_acumulada(int n)
{
	int resultado;
	if (n == 1)
		resultado = 1;
	else
		resultado = n + suma_acumulada (n-1);
	return resultado;
}
int main (void)
{
	
	printf("%d ", suma_acumulada(4));
	return 0;
}

