#include <stdio.h>
#include <locale.h>

/* Exercício 04: Escreva um programa que solicite ao usuário dois números inteiros e ao final apresente na
tela os dois números informados da seguinte forma: "Voce informou os numeros X e Y" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &numero1);
	printf("Informe o segundo número: ");
	scanf("%i", &numero2);
	
	printf("Você informou os números %i e %i.", numero1, numero2);
}
