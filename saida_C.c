#include <stdio.h> // Incluindo a biblioteca padrão de entrada e saída

// Função principal, onde a execução do programa começa

int main() {

    // observe que printf(variavel) não funciona em C
    // devemos usar um especificador(mascara) para exibir
    // uma variavel qualquer

    //Também devemos ter em conta que em C, todo texto
    // deve ser colocado em aspas duplas


    // conhecendo a função printf e puts
    printf("Hello, World lol!\n");
    printf("Tenho o tal do C no vscode lol\n");
    printf("%d\n", 5 + 5);
    printf("%c\n", 'c');
    printf("%d\n", 5 < 8); 
    // C não tem true/false, ele retorna 1 para true e 0 para false
    
    // Existe uma leve diferença entre puts e printf
    // puts --> imprime na mesma linha e pula uma linha
    // printf --> imprime com formatação, semelhante ao Java
    // observe que o printf não pula linha diretamente
    // porem podemos usar o que é chamado sequencia de escape
    
    // /n --> pula linha
    // /t --> é como um TAB
    // /" permite colocar uma aspa dentro de um texto
    // duas \\ são para adicionar uma barra invertida --> em caso de caminhos de diretorio por exemplo
    printf("caminho\\alguma\\pasta por exemplo\n");
    printf("esse \"Texto\" tem sequencia de escape\n");

    printf("Essa ");
    printf("Linha ");
    printf("Foi construida com printf");
    printf("\nusando printf com \\n para novas linhas\n");
    puts("aqui temos puts que cria nova linha");

    //temos também os especificadores de formato
    // para dizer ao compilador que tipo de dado a variavel esta armazenando
    // é basicamente um espaço reservado para o valor da variavel
    
    return 0; // Fim da função main
}
