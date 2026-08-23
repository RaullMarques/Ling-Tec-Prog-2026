#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float valorReal, cotacaoDolar, valorDolar;
	
	scanf("%f %f", &valorReal, &cotacaoDolar);
	
	valorDolar = valorReal / cotacaoDolar;
	
	printf("%,2f\n", valorDolar);
			
	return 0;
}
