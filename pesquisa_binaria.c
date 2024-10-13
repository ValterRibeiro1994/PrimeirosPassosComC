#include <stdio.h>

// codigo para pesquisa binaria

//declarar função
int pesquisa_binaria(int lista[], int tamanho, int valor){
	
	// vamos definir o controle de busca com esquerda e direita
	int esquerda = 0;
	int direita = tamanho - 1;
	
	// vamos iniciar o loop while para iniciar a busca
	while (esquerda <= direita) {
		
		// vamos declarar uma variavel para quebrar a lista pela metade
		int meio = (esquerda + direita) / 2;
		
		/* se o valor que estiver na variavel do meio for igual 
		ao que estamos buscando retornamos a posição dele */
		if (lista[meio] == valor){
			return meio;
		}
		
		// se não continuamos a buscar uai
		if (lista[meio] < valor){
			esquerda = meio + 1;
		} else {
			direita = meio - 1;
		}
	}
	return -1;
} 

int main() {
	
	// definindo os parametros da pesquisa binaria
	int lista[] = {2, 3, 5, 6, 9, 15, 18};
	int valor = 15;
	int tamanho = sizeof(lista)/sizeof(lista[0]);
	
	// obtendo o resultado da busca
	int resultado = pesquisa_binaria(lista, tamanho, valor);
	
	if (resultado != -1){
		printf("O valor que voce busca esta na posicao %d da lista", resultado);	
	} else {
		printf("Item nao encontrado");
	}
}
