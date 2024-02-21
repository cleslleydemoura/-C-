#include <stdio.h>

// CÁLCULO IMC

int main() {
    float peso, altura, imc;
    printf("Digite seu peso: ");
    scanf("%f", &peso); // o & aponta para qual variável está sendo atribuída este valor.
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("Seu IMC é: %.2f", imc); // reminder: não se coloca & na frente da variável como se coloca dentro do recebimento da variável no scanf.
}
