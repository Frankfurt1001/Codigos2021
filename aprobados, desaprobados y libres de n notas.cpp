#include <stdio.h>

int main(int argc, char *argv[]) {
	int ex1, ex2, ex3;
	int i=0;
	int aprob=0;
	int reg=0;
	int libre=0;
	int cant;
	printf("\n\n Este programa determinara cuantos alumnos hay aprobados segun 3 examenes\n\n");
	printf("\n ingrese la cantidad de alumnos a clasificar\n\n");
	scanf("%d", &cant);
	do
	{
		i++;
		printf("\n\n Ingrese la nota de los 3 examenes del alumno %d\n\n", i);
		scanf("%d %d %d", &ex1 ,&ex2 ,&ex3);
		
		if( ex1>0 && ex1<=10)
		{
			if(ex1>=7)
				aprob= aprob+1 ;
			else if(ex1>=6 && ex1<7)
				reg= reg+1;
			else if(ex1<6)
				libre= libre +1;
		}
		else{
			
			printf("\n\n La nota del examen 1 no puede ser esa\n");
		}
		if( ex2>0 && ex2<=10)
		{
			if(ex2>=7)
				aprob= aprob+1 ;
			else if(ex2>=6 && ex2<7)
				reg= reg+1;
			else if(ex2<6)
				libre= libre +1;
		}	
		else{
			
			printf("\n\n La nota del examen 2 no puede ser esa, ingrese de nuevo\n");
			
		}
		if( ex3>0 && ex3<=10)
		{
			if(ex3>=7)
				aprob= aprob+1 ;
			else if(ex3>=6 && ex3<7)
				reg= reg+1;
			else if(ex3<6)
				libre= libre +1;
		}	
		else{
			printf("\n\n La nota del examen 3 no puede ser esa\n");
		}
		
		if(aprob==3){
			printf("\n\n El alumno esta aprobado directamente, Felicitaciones!!!\n\n");
		}
		
		if(reg==3){
			
			printf("\n\n Lo intentaste man, pero tendras que rendir final\n\n");
		}
		
		if(libre==3){
			printf("\n\n cagaste pibe\n");
		}
		if(aprob==2 ||aprob==1){
			printf("\n\n quedas libre, mandale al recuperatorio\n\n");
		}
		
	}while(i!=cant);
	
	
	
	return 0;
}

