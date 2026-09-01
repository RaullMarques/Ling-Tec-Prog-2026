#include <stdio.h>
#include <stdlib.h>

/* crie um programa que leia um numero,entre1 e 9
verifique se ele é um numero primo, caso seja, imprima seu dobro, caso não seja primo,
verifique se é par ou impar.Se for par mostre o resultado da soma com 2. Se for impar
mostre seu proximo e seu anterior..
Caso não esteja entre 1 e 9 mostre _out_of_range.*/

int main(int argc, char *argv[]) {
	int n;
	printf("entre com o numero: ");
	scanf("%d", &n);
	//equivalente (n>= 1 && n <=9
	if (n<10 && n>0)
		// isso é interessante (!(n==4 // n==6 // n==8 // n==9))
		if(n==1 || n==2|| n==3 || n==5 || n==7)
			printf("o dobro de %d = %d", n, (n*2));
		else if(n%2 == 0)
			printf("%d+2 = %d", n, n+2);
		else
			printf("|%d|%d|%d", n-1, n, n+1);
		
	else printf("_out_of_range");
		
		
		car op;
		scanf("%c", &op);
		switch(op){
		
		case 'a' : printf ("opa pa falando com ele"); break;
		
		case 'b' : printf ("benedito"); break;
		
		case 'c' : printf("É complicado a situação"); break;
		
		case 'd' : printf ("Tamo junto"); break; 
	}
	return 0;
}
