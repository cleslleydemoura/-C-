#include <stdio.h>
#include <locale.h>

/* Exercício 11: Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela o
numero informado e na linha de baixo o dobro deste número da seguinte forma:
Numero -> X
Dobro deste numero -> Y*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	printf("Informe um número real: ");
	scanf("%f", &num);
	
	
	printf("Número informado -> %.2f\n", num);
	printf("O dobro deste número -> %.2f", num * 2);
}
