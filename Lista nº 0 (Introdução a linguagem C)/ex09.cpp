#include <stdio.h>
#include <locale.h>

/* Exercício 09: Escreva um programa que solicite ao usuário o nome de sua cor preferida e ao final
apresente na tela a cor informada pelo usuário da seguinte forma: "Voce gosta da cor AAA" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char cor[100];
	printf("Informe sua cor favorita: ");
	scanf("%s", &cor);
	
	printf("Você gosta da cor: %s", cor);
}
