#include <stdio.h>
//Punteros
int main(int argc, char *argv[]) {
	char var;
	char *q;/*asterisco siempre adelante, tambien puede usarse como char* p
	 char *p, q; esta mal, el unico puntero aqui es q por el asterisco
	sirve para guardar la direccion de memoria de la variable var
	podemos modificar a var indirectamente con el puntero
	el puntero tiene que ser del mismo tipo que la variable a la que apuntamos*/
	
	
	var = 4;
	
	
	q = &var;// con esto la direccion de memoria de var se asigna a p
	
	printf("%p\n", q);//se usa %p para char	
	printf("%p\n", &var);// &para que muestre la direccion de memoria
	return 0;
}

