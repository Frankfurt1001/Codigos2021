#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	fp= fopen("fruta.txt", "r");//abrimos un archivo como lectura
	if(fp == NULL){
		printf("No existe el archivo\n");
		
	}return 1;
	
	
	fclose(fp);//cerramos el archivo
	return 0;
}

