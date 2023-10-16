#include <stdio.h>
#include <locale.h>

/* Exercício 02: Elabore um algoritmo que imprima na tela o texto "Hello World!" 10 vezes, um por linha. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int i;

    for (i = 0; i < 10; i++) {
        printf("Hello World!\n");
    }

    return 0;
	
}
