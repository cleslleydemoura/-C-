#include <stdio.h>
#include <locale.h>

/* Exerc�cio 01: Elabore um algoritmo que imprima na tela lado a lado o texto "Hello World!" 10 vezes. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int i;
    
    for (i = 0; i < 10; i++) {
        printf("Hello World! ");
    }
    
    printf("\n"); // Para pular para a pr�xima linha no final
    
    return 0;
}
