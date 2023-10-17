#include <stdio.h>
#include <locale.h>

/* Exercício 11: Elabore um algoritmo que leia um número de entrada que indicará a quantidade de números a serem lidos. Em seguida, leia n números (conforme o valor informado anteriormente) e imprima a soma e a média aritmética dos números informados. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int qnt, i;
    float num, soma = 0, media;

    printf("Informe a quantidade de números a serem lidos: ");
    scanf("%d", &qnt);

    for (i = 0; i < qnt; i++) {
        printf("Informe o %dº número: ", i + 1);
        scanf("%f", &num);
        soma += num;
    }

    media = soma / qnt;

    printf("Soma dos números: %.2f\n", soma);
    printf("Média dos números: %.2f\n", media);

    return 0;
	
}
