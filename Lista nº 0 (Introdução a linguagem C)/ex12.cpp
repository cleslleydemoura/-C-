#include <stdio.h>
#include <locale.h>

/* Exercício 12: Reescrever o programa anterior apresentando o quadrado e o cubo do número informado */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	printf("Informe um número real: ");
	scanf("%f", &num);
	
	
	printf("Número informado -> %.2f\n", num);
	printf("O dobro deste número -> %.2f\n", num * 2);
	printf("Número informado ao quadrado -> %.2f\n", num * num);
	printf("Número informado ao cubo -> %.2f\n", num * num * num);
}
