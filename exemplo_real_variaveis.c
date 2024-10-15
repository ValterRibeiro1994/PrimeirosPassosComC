#include <stdio.h>

int main(){
    
    float chocolate_preco = 2.17;
    int chocolate_no_estoque = 18;
    float preco_estoque_chocolate = chocolate_no_estoque * chocolate_preco;
    char cifrao = '$';

    printf("Temos %i chocolates para vender.\n", chocolate_no_estoque);
    printf("Temos %.2f %c reais de chocolate em estoque.", preco_estoque_chocolate, cifrao);

}