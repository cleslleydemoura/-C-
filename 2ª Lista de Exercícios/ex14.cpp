#include <stdio.h>
#include <locale.h>

/* Exercício 14: Elabore um algoritmo que solicite ao usuário 10 números reais e ao final apresente o maior e o menor deles. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	double num, maior, menor;

    // Solicitar o primeiro número para inicializar as variáveis 'maior' e 'menor'.
    printf("Digite o 1º número: ");
    scanf("%lf", &num);
    maior = menor = num;

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%lf", &num);

        if (num > maior) {
            maior = num;
        }

        if (num < menor) {
            menor = num;
        }
    }

    printf("O maior número é: %.2lf\n", maior);
    printf("O menor número é: %.2lf\n", menor);

    return 0;
	
}
