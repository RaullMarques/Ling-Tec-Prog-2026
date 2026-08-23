#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int anoNascimento, idade, anoAtual;
	
	scanf("%d %d", &idade, &anoAtual);
	
	anoNascimento = anoAtual - idade;
	
	printf("%d\n", anoNascimento);
	
	
			
	return 0;
}
