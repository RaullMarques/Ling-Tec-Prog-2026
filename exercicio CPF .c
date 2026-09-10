#include <stdio.h>
#include <stdlib.h>

int mult (int digto, int valor){
return digito*valor;
}

int main(int argc, char *argv[]) {
	
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, dv, dv2, soma, resto;
	
	scanf ("d% d% d% . d% d% d% . d% d% d% - d% d%",
		 &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &dv, &dv2);
	
	printf ("Confime o CPF: d%d%d%.d%d%d%.d%d%d%-d%d%",
		 &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &dv, &dv2);
	
		
	soma = mult(dg10,)+mult(dg9,)+mult(dg8,)+mult(dg7,)+mult(dg6,)+mult(dg5,)+mult(dg4,)+mult(dg3,)+mult(dg2,);
	soma *=10;
	resto = soma%11;
	
	return 0;
}
