/* essa biblioteca possui funçoes de entrada e saida
aqui vamos usar "scanf" para pedir o nome do usuario
vamos usar "printf" para informar o que queremos do usuario
e retornar uma mensagem de boas vindas */
#include <stdio.h>

// declarar metodo main - sem ela nenhum codigo é executado
int main(){

    /* Em C devemos declarar um array para armazenar 
    caracteres de texto e definir um limite de caracteres */
    char nome[50];

    /*vamos pedir que o usuario informe o nome
    devemos nos atentar que no C não temos "input"
    sendo diferente do python*/
    printf("Digite seu Nome: ");

    /*Com a intensão de previnir um overflow, e pelo fato 
    de estarmos recebendo um array, vamos limitar a entrada
    para garantir que só vai ser recebido 49 caracteres do
    nome fornecido pelo usuario */
    scanf("%49s", nome);

    /*Vamos exibir a mensagem de boas vindas usando um 
    especificador de formato "%s" */
    printf("Bem-vindo(a), %s", nome);

    /*Por convenção devemos retornar alguma coisa para
    indicar o fim da execução do programa, já que nesse
    caso queremos apenas exibir uma mensagem, e não retornar 
    um valor especifico*/
    return 0;


}