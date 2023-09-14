#include <stdio.h>
#include <locale.h>

/* Exercício 04: Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o
número informado é positivo, negativo ou nulo (zero)*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	
	printf("Informe um número real: ");
	scanf("%f", &valor);
	
	if (valor > 0) {
		printf("O número informado é positivo.");
	} else if (valor < 0) {
		printf("O número informado é negativo.");
	} else {
		printf("O número informado é zero.");
	}
}
