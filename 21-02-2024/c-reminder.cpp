#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("Seu IMC �: %.2f", imc); // reminder: n�o se coloca & na frente da vari�vel como se coloca dentro do recebimento da vari�vel no scanf.
}
