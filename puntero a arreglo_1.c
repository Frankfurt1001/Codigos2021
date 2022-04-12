#include <stdio.h>
int suma (int a, int b){
	return a+b;
}
	int resta (int a, int b){
		return a-b;
	}
		int mult (int a, int b){
			return a*b;
		}
int main(int argc, char *argv[]) {
	int (*p[3])(int, int);
	
	p[0]= suma;
	p[1]= resta;
	 p[2]= mult;
	 //hasta aqui podria resumirse aun mas de lo que ya tenemos 
	 
	 printf("El resultado es: %d\n", (*p[2])(4,3));
	return 0;
}

