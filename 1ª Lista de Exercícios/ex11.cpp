#include <stdio.h>
#include <locale.h>

/* Exercício 11: Elabore um algoritmo que leia o nome e o peso de duas pessoas e imprima o nome da
pessoa mais pesada */

int main () {
	setlocale(LC_ALL, "Portuguese");
	

	char nome1, nome2;
	float peso1, peso2;
	
	printf("Insira o primeiro nome: ");
	scanf("%s", &nome1);
	printf("Insira o peso em kg: ");
	scanf("%f", &peso1);
	printf("Insira o segundo nome: ");
	scanf("%s", &nome2);
	printf("Insira o peso em kg: ");
	scanf("%f", &peso2);
	
	if (peso1 > peso2) {
		printf("%s, você possui o maior peso.", &nome1, &peso1);
	} else {
		printf("%s, você possui o maior peso.", &nome2, &peso2);
	}
		
}
