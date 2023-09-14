#include <stdio.h>
#include <locale.h>

/* Exercício 12: Elabore um algoritmo que indique se um número digitado está compreendido entre 20 e
90, ou não*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int number;
	
	printf("Digite um número: ");
	scanf("%i", &number);
	
	if (number > 20 && number < 90) {
		printf("O número informado está entre 20 e 90.");
	} else {
		printf("O número informado não está entre 20 e 90.");
	}
}
