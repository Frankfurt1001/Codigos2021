#include <stdio.h>

int main(int argc, char *argv[]) {
	int arraynota[9],i ;
	char Array []={'a','b','c','d','e','f','g','h','i'};
	for (i=0;i<9;i++)
	{
		printf("Ingrese la nota %d:",i+1);
		scanf("%d",&arraynota[i]);
	}
	for (i=0;i<9;i++)
	{
		printf("El elemento %d contiene %c y se encuentra en %x y ocupa %d bytes \n", i+1, Array[i], &Array[i], sizeof(Array[i])); /*Esta función sizeof()retorna el numero de bytes que ocupa el elemento Array [ i ]*/
	}
	printf("\n\n");
	for (i=0;i<9;i++)
	{
		printf("El elemento %d contiene %d y se encuentra en %x y ocupa %d bytes \n", i, arraynota[i], &arraynota[i], sizeof(arraynota[i]));
	}
	return 0;
	
}

