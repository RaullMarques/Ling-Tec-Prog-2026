#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float v1, v2, v3, v4;
	float soma, media, produtoria;
	
	scanf("%f %f %f %f", &v1, &v2, &v3, &v4);
	
	soma = v1 + v2 + v3 + v4;
	media = soma / 4.0;
	produtoria
 = v1 * v2 * v3 * v4;
	
	printf("Soma: %2f\n", soma);
	printf("Media: %.2lf\n", media);
	printf("Produtoria:%.2f\n", produtoria);
			
	return 0;
}
