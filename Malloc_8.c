#include <stdio.h>
#include <stdlib.h.>
/*La función devuelve un puntero a la primera posición de la
memoria reservada o un NULL si no se pudo hacer la reserva
La asignación de memoria realizada por malloc no modifica el
contenido de esa memoria y hay que tenerlo en cuenta para
usar estas direcciones sin inicializar.*/
int main(int argc, char *argv[]) {
	int n;
	int *p;
	printf("Ingrese cuantos elementos necesita: ");
	scanf("%d", &n);
	p = malloc(n * sizeof (int));
	for (int i = 0; i < n; i++)
		*(p+i) = i*i;//1*1, 2*2, 3*3, 4*4...... y asi sucesivamente
	for (int i = 0; i < n; i++)
		printf("%d ", *(p+i));
	free(p);

	return 0;
}

