#include <stdio.h>
#include <locale.h>

/* Exercício 02: Escreva um programa que solicite ao usuário um número real e ao final imprima na tela se
o número informado é maior ou igual a dez ou menor que 10 (dez)*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	
	printf("Informe um número real: ");
	scanf("%f", &valor);
	
	if (valor >= 10) {
		printf("O valor informado é maior ou igual a dez.");
	} else {
		printf("O valor informado é menor que dez.");
	}
}

