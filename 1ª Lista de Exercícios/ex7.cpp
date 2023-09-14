#include <stdio.h>
#include <locale.h>

/* Exercício 07: Desenvolva um algoritmo que classifique um número inteiro fornecido pelo usuário como
par ou ímpar */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Informe um número: ");
	scanf("%i", &valor);
	
	if (valor % 2 == 0) {
		printf("O número informado é par.");
	}
  	else {
  		printf("O número informado é ímpar.");
	  }
}
