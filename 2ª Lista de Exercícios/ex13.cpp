#include <stdio.h>
#include <locale.h>

/* Exerc�cio 13: Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de registros a serem lidos (N). Em seguida algoritmo deve solicitar o sexo (M/F) e idade de N pessoas e ao final apresentar a m�dia de idade de ambos os g�neros catalogados. */

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

   	printf("A pessoa mais velha �: %s, com %d anos e � do sexo: %c.\n", nomeMaisVelho, idadeMaisVelha, sexoMaisVelho);

    return 0;
}
