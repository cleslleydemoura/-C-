#include <stdio.h>
#include <locale.h>

/* Exercício 13: Escreva um programa que solicite ao usuário dois números inteiros e ao final apresente
na tela a soma dos dois números informados da seguinte forma: "O numeros N e X
somados correspondem a Y" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, result;
	printf("Informe o primeiro número: ");
	scanf("%i", &num1);
	printf("Informe o segundo número: ");
	scanf("%i", &num2);
	
	result = num1 + num2;
	
	
	printf("O numeros %i e %i somados correspondem a %i.", num1, num2, result);
	
}
