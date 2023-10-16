#include <stdio.h>
#include <locale.h>

/* Exerccício 06: Elabore um algoritmo que imprima todos os números pares inteiros de 1 até 1000. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Todos os números pares inteiros de 0 a 1000:\n");
	
	for (int num = 1; num <= 1000; num++) {
		if (num % 2 == 0) {
			printf("%d\n", num);
		}
	}
	
}
