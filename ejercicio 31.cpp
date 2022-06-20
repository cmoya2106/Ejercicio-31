//Crlos Moya y Manuel Rodriguez.
//Ejercicio 31

#include <stdio.h>
int main(){
	int num, total = 0, cont = 0, i = 0;
	double suma, result;
	do
	{
		printf("Ingrese un numero \n" );
		scanf("%i", &num);
		++i;
		if(num < 0)
		{
			total = total + num;
		}
		else{
				cont = cont + 1;
				suma = suma + num;
				result = suma/ cont;  
			}	
	}while(i <= 5);
	printf("\n La sumatoria de los numeros negativos es: %i", total);
	printf("\n El promedio de los numeros positivos es: %.2lf", result);
	return 0;
			
}
		
