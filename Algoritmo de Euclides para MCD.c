#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero1, numero2;
	int residuo, mcd;
	printf("\nIngrese el dividendo: \n");
	scanf("%d", &numero1);
	printf("\nIngrese el divisor: \n");
	scanf("%d", &numero2);
	do
	{
	residuo = (numero1 % numero2);
	printf("%d / %d = %d\n", numero1, numero2, residuo);
	
	if(residuo!=0){
		
	numero1 = numero2;
	numero2 = residuo;
	}
	else 
	{
		mcd = numero2;
		
	} 
	}while(residuo !=0);
	printf("\n El MCD es: %d \n", mcd);
	
	return 0;
}

