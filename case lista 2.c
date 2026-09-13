#include <stdio.h>
#include <stdlib.h>

/*========== exercicio 1 ========*/
int main(int argc, char *argv[]) {

int anoNascimento, idade, anoAtual;
	
	printf("Digite sua idade : ");
	scanf("%d", &idade);
	
	printf("Digite o ano atual :");
	scanf("%d", &anoAtual);
	
	anoNascimento = (anoAtual - idade);
	
	printf("%d\n", anoNascimento);

  /*========== exercicio 2 ========*/
  
float k, m;
	
	printf("Insira a velocidade desejada: ");
	scanf("%f", &k);
	
	m = k / 36.0;
	
	printf("%,2f Metros por segundo ", m);
  
  /*========== exercicio 3 ========*/

  float valorReal, cotacaoDolar, valorDolar;

	printf("Digite o valor em Reais $:");
	scanf("%f", &valorReal);
	
	printf("Digite a cotação do Dolar: ");
	scanf("%f", &cotacaoDolar);
	
	valorDolar = valorReal / cotacaoDolar;
	
	printf("%.2f valor em dolar\n", valorDolar);

  /*========== exercicio 4 ========*/

  float celsius, fahrenheit;

    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

   
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    printf("A temperatura em Fahrenheit e: %.2f\n", fahrenheit);

  /*========== exercicio 5 ========*/

  	double g, r;
	double p = 3.141592;
	
	printf("=== Conversão de graus para radiano ===\n");
	
	printf("Digite o valor a ser convertido: ");
	scanf("%lf", &g);
	
	r = g * p / 180.0;
	
	printf("%6lf\n", r);

  /*========== exercicio 6 ========*/

  int numero;
	
	printf("Diite um numero interiro:");
	scanf("%d", &numero);
	
	printf("Antecessor: %d\n", numero - 1);
	printf("Sucessor: %d\n", numero +1);

  /*========== exercicio 7 ========*/

  double total = 780000.00;
	
	double primeiro = total * 0.46;
	double segundo = total * 0.31;
	double terceiro = total * 0.22;
	
	printf("Primeiro ganhador(46%%): R$ %.2f\n", primeiro);
	printf("Segundo ganhador(36%%): R$ %.2f\n", segundo);
	printf("Terceiro ganhador(22%%): R$ %.2f\n", terceiro);

  /*========== exercicio 8 ========*/
  
	
	return 0;
}
