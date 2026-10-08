#include <stdio.h>
#include <stdlib.h>

int comp_maior (int a, int b){
	if(a>b)return a;
	else return b;
}

int main(int argc, char *argv[]) {
	int valor[10];
	int i;
	printf("Leia os numeros\n");
	//PARA (INICIAL, CONDIÇÃO, INCREMENTO)
	for (i=0; i<10; i++){
		scanf("%d", &valor[i]);
	}
	for(i=9; i>0; i--){
		printf("|%d|", valor[i]);
	}
	return 0;
}
//continuaçao
#include <stdio.h>
#include <stdlib.h>



int comp_maior (int a, int b){
	if(a>b)return a;
	else return b;
}

int main(int argc, char *argv[]) {
	int valores[10];
	int i, maior, menoir;
	printf("Leia os numeros\n");
	//for (INICIAL, CONDIÇÃO, INCREMENTO)
	for (i=0; i<10; i++){
		scanf("%d", &valores[i]);
	}
	maior = valor[0]
	for (i=1, maior = valor[0]; i<5; i = i+2){
		int comp_temp = comp(valor[i], valor[i+1]);
		maior = comp(maior, comp_temp);
		
		if(valores[i]>valores[i+1]){
			maior = valores[0];
		}else{
			maior = valores[1];
		}
	}
	return 0;
}
