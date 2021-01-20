#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

double calcularJurosSimples(double capital, double taxaJuros, double tempo){
	double juros = capital * (taxaJuros/100) * tempo;
	return capital + juros;
}
double calcularJurosCompostos(double capital, double taxaJuros, double tempo){
	
	return capital * pow((1 + (taxaJuros/100)), tempo);
}
int main (){
	
	setlocale(LC_ALL, "PORTUGUESE");
	
	double montante, capital, taxaJuros;
	int tempo;
	char numero;
	
	printf("Juros simples e compostos!\n\n");
	printf("Caso queira calcular juros simples, digite 1.\n");
	printf("Se quiser calcular juros compostos, digite 2.\n");
	scanf("%c", &numero);
	printf("Por favor, digite o valor do capital inicial.\n");
	scanf("%lf", &capital);
	
	printf("Por favor, digite a porcentagem de juros mensal.\n");
	scanf("%lf", &taxaJuros);
	
	printf("Por favor, digite a quantidade de meses.\n");
	scanf("%d", &tempo);
	
	
	if (numero == '1'){
		montante = calcularJurosSimples(capital, taxaJuros, tempo);
	}
	
	else if (numero == '2'){
		montante = calcularJurosCompostos(capital, taxaJuros, tempo);
	}
	printf("O valor de juros é %.2f. E o montante é: %.2f\n", montante - capital, montante);
	
	system("pause");
	return 0;
}
