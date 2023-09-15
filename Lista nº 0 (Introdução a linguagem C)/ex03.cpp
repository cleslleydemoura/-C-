#include <stdio.h>
#include <locale.h>

/* Exercício 03: Escreva um programa que solicite ao usuário um número inteiro e ao final apresente na tela
o número informado da seguinte forma: "Foi informado o valor: X" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Informe um número: ");
	scanf("%i", &numero);
	
	printf("Foi informado o valor: %i.", numero);
}
