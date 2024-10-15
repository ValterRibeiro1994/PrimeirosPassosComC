#include <stdio.h>

int main(){
    printf("Bem vindo !!!");
    return 0;
}

/*
linha 1 - #include <stdio.h> é uma bilbioteca usamos essa sintaxe
para importar bibliotecas, stdio.h nos permite trabalhar com 
funções de entrada e saida como printf da linha 4 

linha 2 - C ignora os espaços em branco, porém usamos para deixar
o código mais legivel imagine ler isso:
int main(){printf("Bem vindo!!");return 0; } --> funciona da mesma forma

linha 3 - main() é chamada de função e é obrigatorio em todo programa
se não o compilador não vai saber onde iniciar a execução
--> é serio troque o nome da função main por principal que vai dá ruim
aqui temos chaves( {} ) para abrir o bloco de codigo que a função 
vai executar, o que estiver dentro das chaves vai ser executado

linha 4 - printf() é uma função que usamos para imprimir/exibir 
texto na tela, nesse caso voce vai ver -- > Bem vindo !!!

linha 5 - return 0, encerramos a função dando um valor de retorno
OBS: No caso da função main, é comum retornar um valor para indicar 
o status de execução do programa. O return 0; é uma convenção 
que indica que o programa terminou com sucesso

linha 6 - sempre precisamos adicionar a chave de fechamento para encerrar
o bloco, se esquecer de fechar o bloco vai dar erro

*/