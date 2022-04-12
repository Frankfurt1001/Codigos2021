#include <stdio.h>
#define G 50000
#define T 28000
#define P 500
int main(int argc, char *argv[]) {
	int id, dias, r, horas, ventas, articulo;
	float sg, st, stc, std, hx, costo;
	do{
		
		printf("Gerentes:1 \ntrabajador:2 \nTrabajador de Comision:3 \nTrabajador a Destajo:4 \n");
		
		printf("\n Ingrese el codigo del empleado: ");
		scanf("%d", &id);
		
		switch(id){
		case 1:
			printf("\n Ingrese los dias trabajados: ");
			scanf("%d", &dias);
			if(dias<=30)
				sg= (G/30)*dias;
			
			else {
			dias= dias-30;
			sg= G + ((G/30)*dias);
			}	
				printf("El sueldo que gano en los dias trabajados es: $%.2f\n ", sg);
			
			printf("Desea realizar otra operacion?\n");
			printf(" [1.SI   2.NO]\n");
			scanf("%d", &r);
				break;
		case 2:
			printf("\n Ingrese los dias trabajados: ");
			scanf("%d", &dias);
			horas= dias*8;
				if(horas>=40){
				hx= horas-40;
					st= ((T/30)*dias) + ((((T/30)*1.5)*hx));
			}
				else {
				st=((T/30)*dias);
				}
				printf("El sueldo que gano en los dias trabajados es: %.2f ", st);
				printf("Desea realizar otra operacion?\n");
				printf(" [1.SI   2.NO]\n");
				scanf("%d", &r);
				break;
		case 3:
			printf("\n Ingrese las ventas realizadas en esta semana: ");
			scanf("%d", &ventas);
			stc= 250+(P*(5.7/100));
				printf("El sueldo que gano en la semana fue: %.2f ", stc);
			printf("Desea realizar otra operacion?\n");
			printf(" [1.SI   2.NO]\n");
			scanf("%d", &r);
			break;
		case 4:
			
			printf("\n Ingrese la cantidad de articulos producidos: ");
			scanf("%d", &articulo);
			printf("\n Ingrese el costo de los  articulos producidos: ");
			scanf("%f", &costo);
			std= costo* articulo;
				printf("El sueldo que gano en la semana fue: %.2f ", std);
			printf("Desea realizar otra operacion?\n");
			printf(" [1.SI   2.NO]\n");
			scanf("%d", &r);
			break;
		}
		
	} while(r!=2);
	return 0;
}

