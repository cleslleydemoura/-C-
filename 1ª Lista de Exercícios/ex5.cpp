#include <stdio.h>
#include <locale.h>

/* Exercício 05: . Elabore um algoritmo que leia um número inteiro e imprima uma das mensagens: é múltiplo
de 3, ou, não é múltiplo de 3*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Informe um número: ");
	scanf("%i", &valor);
	
	if (valor % 3 == 0) {
		printf("O valor informado é múltiplo de 3.");
	}
  	else {
  		printf("O valor informado não é múltiplo de 3.");
	  }
}
