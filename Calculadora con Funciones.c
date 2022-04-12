#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int sum(int num1, int num2);
	int res(int num1, int num2);
	int mul(int num1, int num2);
	int div(int num1, int num2);
	int pot(int num1, int num2);
	int num1, num2;
	printf("\nIngrese el valor del primer numero\n");
	scanf(" %d", &num1);
	printf("\nIngrese el valor del segundo numero\n");
	scanf(" %d", &num2);
	
	
	return 0;
}
int sum(int num1, int num2){
	sum=num1-num2;
	return (sum);
}
	int res(int num1, int num2){
		res=num1-num2;
		return (res);
	}
		int mul(int num1, int num2){
			mul=num1*num2;
			return (mul);
		}
			int div(int num1, int num2){
				div=num1/num2;
				return (div);
			}
				int pot(int num1, int num2){
					pot= pow(num1, num2);
					return (pot);
				}
					
