#include <stdio.h>
#include <locale.h>

/* Exercício 07: Escreva um programa que solicite ao usuário um número inteiro e um número real e ao final
apresente na tela os dois números informados formatando com duas casas decimais
somente o número real da seguinte forma: "Voce informou os numeros N e X.YY" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1;
	float num2;
	
	printf("Informe um número inteiro: ");
	scanf("%i", &num1);
	printf("Informe um número real: ");
	scanf("%f", &num2);
	
	printf("Você informou os números %i e %.2f.", num1, num2);
}
