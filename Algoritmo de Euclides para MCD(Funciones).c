#include <stdio.h>
mat
int operacion(int num1, int num2){
	int residuo, mcd;
	residuo = (num1 % num2);
	printf("%d / %d = %d\n", num1, num2, residuo);
	
	if(residuo!=0){
		num1 = num2;
		num2 = residuo;
	}
	else 
	{
		mcd = num2;
		return mcd;
	} 
}
int main(int argc, char *argv[]) {
	int numero1, numero2, total;

	printf("\nIngrese el dividendo: \n");
	scanf("%d", &numero1);
	printf("\nIngrese el divisor: \n");
	scanf("%d", &numero2);
	total = operacion(numero1, numero2);
	printf("\n El MCD es: %d \n", total);
	return 0;
}

