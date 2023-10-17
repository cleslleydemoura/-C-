#include <stdio.h>
#include <locale.h>

/* Exercício 12: Elabore um algoritmo que leia um número de entrada que indicará a quantidade de registros a serem lidos (N). Em seguida algoritmo deve solicitar o nome e idade de N pessoas e ao final apresentar o nome da pessoa mais velha. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
    printf("Quantos registros a serem lidos? ");
    scanf("%d", &num);

    char nomeMaisVelho[50];
    int idadeMaisVelha = -1;

    for (int i = 1; i <= num; i++) {
        char nome[50];
        int idade;
        char sexo;

        printf("Informe o nome da pessoa %d: ", i);
        scanf(" %49[^\n]", nome);

        printf("Informe a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        if (idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
            int j = 0;
            while (nome[j] != '\0') {
                nomeMaisVelho[j] = nome[j];
                j++;
            }
            nomeMaisVelho[j] = '\0';
        }
    }

   	printf("A pessoa mais velha é: %s, com %d anos.\n", nomeMaisVelho, idadeMaisVelha);

    return 0;
}
