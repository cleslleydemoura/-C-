#include <stdio.h>
#include <locale.h>

/* Exercício 05: Escreva um programa que solicite ao usuário um número real e ao final apresente na tela o
número informado formatado com duas casas decimais da seguinte forma: "Voce informou o numero X.YY"*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	printf("Informe um número real: ");
	scanf("%f", &numero);
	
	printf("Você informou o número %.2f.", numero);
}
