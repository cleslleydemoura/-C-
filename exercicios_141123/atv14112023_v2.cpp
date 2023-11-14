#include <stdio.h>

/* Escreva um algorítimo que solicite ao usuário dois números reais e apresente um menu de opções com operações matemáticas */
int ImprimirMenu() {
	printf("\n******* CALCULADORA *******");
	printf("\n * 1: Soma                *");
	printf("\n * 2: Subtrair            *");
	printf("\n * 3: Multiplicar         *");
	printf("\n * 4: Dividir             *");
	printf("\n * 5: Exponencial         *");
	printf("\n * 6: Area do triangulo   *");
	printf("\n***************************");
	printf("\n   Digite sua opcao:       ");
	int opcao;
	scanf("%i", &opcao);
	return(opcao);
}
/* Na função somar a seguir, o parâmetro B tem valor default, significa que, se este parâmetro for omitido a função assumirá o valor default
  (JAMAIS UM PARÂMETRO COM VALOR DEFAULT PODE SER IMPLEMENTADO NA FRENTE DE UM SEM.)*/
  
  // Parâmetro B tem valor default.
float somar(float A, float B) {
	float resultado = A + B ;
	return(resultado);
}

float subtrair(float A, float B) /*  Essa é a assinatura da função Subtrair. Esse cabeçalho é obrigatório porque a função foi implementada após sua chamada
									 no método principal*/ {
	float resultado = A - B ;
	return(resultado);
}

float multiplicar(float A, float B) {
	float resultado = A * B ;
	return(resultado);
}

float dividir(float A, float B) {
	if (B==0) {
		printf(" ERROR ");
		return(0);
	} else {
		return(A/B);
	}
}

float exponencial(float A, float B) {
	float total = 1; 
	for(int i=1; i <= B; i++) 
		total *= multiplicar (A, 1); // <--- Utilizando a operação multiplicar como base.
		return(total);
}

float areaTriangulo(float A, float B) {
	float resultado = (A * B) / 2;
	return(resultado);
}


int main () {
	float num1, num2;
	printf("Informe o primeiro valor: ");
	scanf("%f", &num1);
	printf("Informe o segundo valor: ");
	scanf("%f", &num2);
	
	int resposta = ImprimirMenu();
	printf("Foi escolhida a opcao %d!", resposta);
	
	switch(resposta) {
		case 1: printf(" %.1f + %.1f = %.2f", num1, num2, somar(num1, num2));
			break;
		case 2: printf(" %.1f - %.1f = %.2f", num1, num2, subtrair(num1, num2));
			break;
		case 3: printf(" %.1f X %.1f = %.2f", num1, num2, multiplicar(num1, num2));
			break;
		case 4: printf(" %.1f / %.1f = %.2f", num1, num2, dividir(num1, num2));
			break;
		case 5: printf(" %.1f elevado a %.1f = %.2f", num1, num2, exponencial(num1, num2));
			break;
		case 6: printf(" Area do Triangulo = %.2f", areaTriangulo(num1, num2));
			break;
			
			default: printf(" Obrigado por usar nossa calculadora! Ate mais! ");
	}
}
