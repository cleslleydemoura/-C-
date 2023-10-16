#include <stdio.h>
#include <locale.h>

/* Exercício 05: Elabore um algoritmo que imprima todos os números decrescentes de 100 até 0 inclusive. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	for (int num = 100; num >= 0; num--) {
        printf("%d\n", num);
    }

    return 0;
}
