#include <stdio.h>
#include <locale.h>

/* Exercício 01: Elabore um programa que solicite ao usuário um número real e ao final 
imprima na tela se o número informado é maior que 10 (dez) */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	
	printf("Informe um número real: ");
	scanf("%f", &valor);
	
	if (valor > 10) {
		printf("O valor informado é maior que dez.");
	} else {
		printf("O valor informado é menor que dez.");
	}
}

