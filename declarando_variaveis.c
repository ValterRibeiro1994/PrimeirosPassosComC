/*
Para declarar variaveis precisamos definir que tipo de dado ela
receber, o nome e o valor --> algo semelhante ao Java
*/
#include <stdio.h>

int main(){
    // vamos declarar algumas variaveis
    int numero = 10;
    float numeroDecimal = 9.99;
    char letraUnica = 'A';

    /* 
    o tipo de dados especifica o tamanho e o tipo de informação
    que a variavel vai armazenar
    
    int --> possui 2 ou 4 bytes e só aceita numeros inteiros
    float --> possui 4 bytes e aceita apenas numeros com casas decimais entre a 6 e 7 digitos
    double --> tem 8 bytes só aceita decimais podendo chegar a 15 digitos de precisão
    char --> possui 1 byte recebe apenas caracteres de texto('A', '2', '@' )

    os especificadores de tipo de dado começam com %
    %d ou %i --> são para o int
    %f ou %F --> são para o float
    %lf --> são para double
    %c --> são para char * acredito ser apenas para uma letra *
    %s --> usado para strings de texto
    
    */

    printf("Numero: %i --> float: %.2f --> letra: %c ", numero, numeroDecimal, letraUnica);
}