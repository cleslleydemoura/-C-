#include <stdio.h>
#include <locale.h>

/* Exercício 03: Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o
número informado é maior que dez, se é menor que dez, ou se é igual a dez*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	
	printf("Informe um número real: ");
	scanf("%f", &valor);
	
	if (valor > 10) {
		printf("O valor informado é maior ou igual a dez.");
	} else if (valor == 10) {
		printf("O valor informado é dez.");
	} else {
		printf("O valor informado é menor que dez.");
	}
}
