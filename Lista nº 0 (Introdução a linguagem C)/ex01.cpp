#include <stdio.h>
#include <locale.h>

/* Exercício 01: Escreva um programa que apresente na tela a frase: "Meu primeiro programa!!!" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Este é o meu primeiro programa!!!");
}
