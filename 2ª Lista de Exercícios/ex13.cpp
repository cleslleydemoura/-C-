#include <stdio.h>
#include <locale.h>

/* Exercício 13: Elabore um algoritmo que leia um número de entrada que indicará a quantidade de registros a serem lidos (N). Em seguida algoritmo deve solicitar o sexo (M/F) e idade de N pessoas e ao final apresentar a média de idade de ambos os gêneros catalogados. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
    printf("Quantos registros a serem lidos? ");
    scanf("%d", &num);

    char nomeMaisVelho[50];
    int idadeMaisVelha = -1;
    char sexoMaisVelho;

    for (int i = 1; i <= num; i++) {
        char nome[50];
        int idade;
        char sexo;

        printf("Informe o nome da pessoa %d: ", i);
        scanf(" %49[^\n]", nome);

        printf("Informe a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        
        printf("Informe o sexo da pessoa %d (M/F): ", i);
        scanf(" %c", &sexo);

        if (idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
            sexoMaisVelho = sexo;
            int j = 0;
            while (nome[j] != '\0') {
                nomeMaisVelho[j] = nome[j];
                j++;
            }
            nomeMaisVelho[j] = '\0';
        }
    }

   	printf("A pessoa mais velha é: %s, com %d anos e é do sexo: %c.\n", nomeMaisVelho, idadeMaisVelha, sexoMaisVelho);

    return 0;
}
