#include <stdio.h>
#define G 12000
#define P 500
#define T 187.5
#define A 400
int main(int argc, char *argv[]) {

	int id,  r, horas, ventas, articulo;
	float sg, st, stc, std, hx ;
	do{
		
		printf("Gerentes:1 \ntrabajador:2 \nTrabajador de Comision:3 \nTrabajador a Destajo:4 \n");
		
		printf("\n Ingrese el codigo del empleado: ");
		do{
			scanf("%d", &id);
			if (id<=0 || id>4){
				printf("\n Ingrese el codigo del empleado nuevamente, tenga en cuenta la lista proporcionada \n");
			}
		}while(id<0||id>4);
		switch(id){
		case 1:
			
			sg= G*7;	
			printf("El sueldo que gano en la semana es: $%.2f\n ", sg);
			
			printf("Desea realizar otra operacion?\n");
			printf(" [1.SI   2.NO]\n");
			scanf("%d", &r);
			break;
		case 2:
			printf("\n Ingrese la cantidad de horas trabajadas: ");
			do{
				scanf("%d", &horas);
				if (horas>=40){
					hx= horas-40;
					st= (T * 40) + ((T *1.5)* hx);
				}
				else {
					st= T* horas;
					
				}
				if(horas<0 || horas==0)
					printf("\n Ingrese nuevamente la cantidad, esta no puede ser negativa ni valer 0 \t");
			}while(horas<=0);
			printf("El sueldo que gano segun las horas trabajadas es: %.2f ", st);
			printf("Desea realizar otra operacion?\n");
			printf(" [1.SI   2.NO]\n");
			scanf("%d", &r);
			break;
		case 3:
			printf("\n Ingrese las ventas realizadas en esta semana: ");
			do{
				scanf("%d", &ventas);
				if(ventas<0)
					printf("\n Ingrese nuevamente la cantidad, esta no puede ser negativa\t");
				
				stc= 250+((P*(5.7/100))*ventas);
			}while(ventas<0);
			
			printf("El sueldo que gano en la semana fue: %.2f ", stc);
			printf("Desea realizar otra operacion?\n");
			printf(" [1.SI   2.NO]\n");
			scanf("%d", &r);
			break;
		case 4:
			
			printf("\n Ingrese la cantidad de articulos producidos: ");
			do{
				scanf("%d", &articulo);
				if(articulo<=0)
					printf("\n Ingrese nuevamente la cantidad, esta no puede ser negativa ni valer 0\t");
			}while(articulo<=0);
			std= T* articulo;
			printf("El sueldo que gano en la semana fue: %.2f ", std);
			printf("Desea realizar otra operacion?\n");
			printf(" [1.SI   2.NO]\n");
			scanf("%d", &r);
			break;
		}
		
	} while(r!=2);
	return 0;
}

