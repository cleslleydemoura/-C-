#include <stdio.h>
#include <locale.h>

/* Exercício 06: Refazer o exercício anterior, solicitando antes o múltiplo a ser testado*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("EInforme dois números que você deseja descobrir se o primeiro é multiplo do segundo:\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	if (num1 % num2 == 0) {
		printf("O primeiro valor é múltiplo do segundo");
	} else {
		printf("O primeiro valor não é múltiplo do segundo");
	}
}
