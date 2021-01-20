#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

double calcularPrestacao (double presenteValor, double taxaFixa, int parcelas){
	double prestacao = presenteValor * ((pow(1 + taxaFixa, parcelas) * taxaFixa ) / (pow(1 + taxaFixa, parcelas) - 1));
	return prestacao;
}
double calcularMontante (double prestacao, int parcelas){
	double montante = prestacao * parcelas;
	return montante;
}
void imprimirTabelaPrice (double presenteValor, double prestacao, double taxaFixa, int parcelas ){
	double saldoDevedor = presenteValor; 
	double amortizacao = amortizacao = prestacao - (taxaFixa * saldoDevedor);;
	
	printf("                          TABELA PRICE           \n\n");
		
	printf(" MÊS    |   PRESTAÇÃO   |     JUROS   |    AMORTIZAÇÃO   |    SALDO DEVEDOR   |\n");
	
	int i;
	for (i = 1; i <= parcelas ; i++){
		
		printf("  %d          %.2f         %.2f          %.2f             %.2f\n",
		        i, prestacao, taxaFixa*saldoDevedor, amortizacao , saldoDevedor);
	
	amortizacao = prestacao - (taxaFixa * saldoDevedor);
	saldoDevedor = saldoDevedor - amortizacao;
	
	}
	
}

int main (){
	setlocale(LC_ALL, "PORTUGUESE");
	double montante, prestacao, presenteValor, taxaFixa;
	int parcelas;
	
	printf("Cálculo de Empréstimo (Baseado na tabela PRICE)\n\n");
	
	printf("Por favor, digite o valor emprestado. \n");
	scanf("%lf", &presenteValor);
	
	printf("Por favor, digite a taxa de juros.\n");
	scanf("%lf", &taxaFixa);
	taxaFixa = taxaFixa / 100;
	
	printf("Por favor, digite a quantidade de parcelas desejadas.\n");
	scanf("%d", &parcelas);
	
	prestacao = calcularPrestacao(presenteValor, taxaFixa, parcelas);
	printf("O valor da prestação é %.2f\n", prestacao);
	
	montante = calcularMontante (prestacao, parcelas);
	printf("O valor do montante é %.2f\n\n", montante);
	
	imprimirTabelaPrice(presenteValor, prestacao, taxaFixa, parcelas);
	
	system("pause");
	return 0;
}
