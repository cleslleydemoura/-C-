#include <stdio.h>
#include <locale.h>

/* 	Exercício 13: Elabore um algoritmo que leia dois números e imprima qual é maior, qual é menor, ou se
são iguais*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int no1, no2;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &no1);
	printf("Digite o segundo número: ");
	scanf("%i", &no2);
	
	if (no1 > no2) {
		printf("O primeiro número é maior: %i.", no1);
	} else if (no1 = no2) {
		printf("O primeiro e o segundo número são iguais: %i e %i.", no1, no2);
	}
	 else {
		printf("O segundo número é maior: %i.", no2);
	}
}
