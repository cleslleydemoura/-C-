#include <stdio.h>


int msg (char nome[10]) { // a variável tem que ser colocada aqui para poder ser chamada no código
    printf("Bom dia,  %s\n", nome);
}

int calc_idade() {
    int ano_nasc;
    int ano_atual = 2024;
    printf("Qual é seu ano de nascimento? ");
    scanf("%i", &ano_nasc);
    int idade = ano_atual - ano_nasc;
    
    printf("Sua idade é: %i", idade);
}

int main()
{
    char nome[10];
    printf("Qual é o seu nome? ");
    scanf("%s", &nome);
    msg(nome);
    calc_idade();

}
