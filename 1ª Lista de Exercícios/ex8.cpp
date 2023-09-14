#include <stdio.h>
#include <locale.h>

/* Exercício 08: Elabore um algoritmo que leia um número, e se ele for maior do que 20, imprimir a metade
desse número, caso contrário, imprimir o dobro do número*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Informe um número: ");
	scanf("%i", &valor);
	
	if (valor >=20) {
		printf("%i", valor/2);
	}
  	else {
  		printf("%i", valor+valor);
	  }
}
