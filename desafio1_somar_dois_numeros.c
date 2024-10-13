#include <stdio.h>

// desafio 1 - somar dois numeros inteiros

int main(){
	
	// Declarando as variaveis necessarias
	int num1, num2, soma;
	
	// receber o primeiro numero
	printf("Digite numero 1: \n");
	scanf("%d", &num1);
	
	// receber o segundo numero
	printf("Digite numero 2: \n" );
	scanf("%d", &num2);
	
	// calcular os dois numero
	soma = num1 + num2;
	
	// exibindo a soma
	printf("A soma de %d e %d : %d\n", num1, num2, soma);
	
	
}

