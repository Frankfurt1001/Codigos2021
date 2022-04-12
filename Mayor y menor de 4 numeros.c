#include <stdio.h>

int main(int argc, char *argv[])
{
	float	num1, num2, num3, num4, promedio;
	
	printf("este programa determinara el mayor y el menor de cuatro numeros\n\n");
	printf("Ingrese el valor del primer numero\n\n");
	scanf("%f", &num1);
	printf("Ingrese el valor del segundo numero\n\n");
	scanf("%f", &num2);
	printf("Ingrese el valor del tercer numero\n\n");
	scanf("%f", &num3);
	printf("Ingrese el valor del cuarto numero\n\n");
	scanf("%f", &num4);
	promedio=(num1+num2+num3+num4)/4;
		printf("\n\n El promedio de los numeros ingresados es: %.2f\n\n", promedio);
	
	if (num1==num2 && num2==num3 && num3==num4)
	{
		printf("\n\n los numeros son iguales\n\n");
	}
	if(num1>num2 && num1>num3 && num1>num4)
	{
			printf("\n\n El mayor de todos es %.2f\t\t", num1);
			
	}
	else  if(num2>num3 && num2>num1 && num2>num4)
	{
	printf("\n\n El mayor de todos es %.2f\t\t", num2);
	
	  }
	
	  else if(num3>num4 && num3>num1 && num3>num2)
	  {
		printf("\n\n El mayor de todos es %.2f\t\t", num3);
	}
	  
	  else if(num4>num3 && num4>num1 && num4>num2)
   {
		  printf("\n\n El mayor de todos es %.2f\t\t", num4);
	}
	  if(num1<num2 && num1<num3 && num1<num4)
	  {
		  printf("\n\n El menor de todos es %.2f\t\t", num1);
		  
	  }
	  else  if(num2<num3 && num2<num1 && num2<num4)
	  {
		  printf("\n\n El menor de todos es %.2f\t\t", num2);
		  
	  }
	  
	  else if(num3<num4 && num3<num1 && num3<num2)
	  {
		  printf("\n\n El menor de todos es %.2f\t\t", num3);
	  }
	  
	  else if(num4<num3 && num4<num1 && num4<num2)
	  {
		  printf("\n\n El menor de todos es %.2f\t\t", num4);
	  }
	  
	return 0;
	}

