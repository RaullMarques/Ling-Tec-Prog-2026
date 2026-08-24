#include <stdio.h>
#include <stdlib.h>
	
	int main(int argc, char *argv[]) {

	int numero;
	
	printf("Diite um numero interiro:");
	scanf("%d", &numero);
	
	printf("Antecessor: %d\n", numero - 1);
	printf("Sucessor: %d\n", numero +1);
			
	return 0;
}
