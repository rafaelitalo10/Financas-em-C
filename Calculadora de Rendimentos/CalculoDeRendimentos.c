#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
  	
	setlocale(LC_ALL,"PORTUGUESE");
	
	double valorInicial;
	double taxaRendimento, taxaInflacao, taxaAdministracao;
	double aporteMensal;
	double ajustePorMes = 0;

	int periodoMeses;
	printf("Bem vindo, a calculadora de Rendimentos!\n\n");
	printf("Por favor, digite o valor inicial em R$:\n");
	scanf("%lf", &valorInicial);
	
	printf("Por favor, digite o aporte mensal em R$:\n");
	scanf("%lf", &aporteMensal);
	
	printf("Por favor, digite o período em meses para o resgate:\n");
	scanf("%lf", &periodoMeses);
	
	printf("Por favor, digite a taxa de rendimento:\n");
	scanf("%lf", &taxaRendimento);
	
	printf("Por favor, digite a taxa de administração:\n");
	scanf("%lf", &taxaAdministracao);
	
	printf("Por favor, digite a taxa de inflação:\n");
	scanf("%lf", &taxaInflacao);

	return 0;
	system("pause");
}
