#include <stdio.h>
#include <locale.h>

/* Exercício 09: Elabore um algoritmo que solicite ao usuário um número inteiro que indicará a quantidade de vezes que o texto "Hello World!" será impresso na tela, um em cada linha. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int loop;
	
	printf("Defina quantas vezes você quer que o programa repita a frase 'Hello World!': ");
	scanf("%d", &loop);
	
	for (int i = 0; i < loop; i++) {
		printf("%d - Hellow, World!\n", i + 1);
	}
	
}
