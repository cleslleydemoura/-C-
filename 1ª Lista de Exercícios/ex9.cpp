#include <stdio.h>
#include <locale.h>

/* Exercício 09: Elabore um algoritmo que leia dois números inteiros e realize a adição; caso o resultado
seja maior que 10, imprima o quadrado do resultado, caso contrário, imprima a metade dele*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int no1, no2;
	int result = no1 + no2;
	
	printf("Primeiro número: ");
	scanf("%i", &no1);
	printf("Segundo número: ");
	scanf("%i", &no2);
	
	if (result >= 10) {
		printf("%i", result * 2);
	} else {
		printf("%i", result / 2);
	}
}
