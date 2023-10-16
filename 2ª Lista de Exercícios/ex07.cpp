#include <stdio.h>
#include <locale.h>

/* Exercício 07: Elabore um algoritmo que imprima todos os números ímpares de 1000 até 0. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Todos os numeros ímpares inteiros de 0 a 1000:\n");
	for (int num = 1000; num >= 0; num--) {
		if (num % 2 != 0) {
			printf("%d\n", num);
		}
	}
	
}
