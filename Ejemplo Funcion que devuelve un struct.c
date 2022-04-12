#include <stdio.h>
struct persona {
	int dni;
	char nombre[80];
	char apellido[80];
};
struct persona carga(void);

int main(int argc, char *argv[]) {
struct persona d = carga();
	printf("el DNI Ingresado fue: %d\n", d.dni);

	printf("el nombre fue %s\n", d.nombre);
	printf("y el apellido es %s", d.apellido);
	return 0;
}

struct persona carga (void) {
	struct persona r;
	printf("Ingrese su DNI: ");
	scanf("%d", &r.dni);
	printf("Ingrese su nombre: ");
	scanf("%s", &r.nombre);
	printf("Ingrese su apellido: ");
	scanf("%s", &r.apellido);
	return r;
}
