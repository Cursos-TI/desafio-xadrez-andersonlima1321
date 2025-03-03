#include <stdio.h>

int main(){

    //nome do desafio
printf("Desafio xadrez, nivel novato.\n");

    //movimeto do bispo
    
    //declarei a variavel NUM para o movimento do bispo
    int num = 0;
    
    //informandcao para onde o bispo ira se mover
    printf("Movimento do Bispo.\n");
    printf("O Bispo ira se mover por 5 casas na diagonal a direita:\n");
    
    //utilizei o while loops para a movimentacao do bispo
    while(num < 5)
    {  
        //esse printf determina a direcao tomada pelo bispo
       printf("cima/direita\n",num);
       num++;

      
    }//esse printf informa em qual direcao o bispo se movel
    printf("Bispo se moveu por 5 casas na diagonal a direita!\n");
   
    
    //movimetação da rainha
    int i=0;//declarei a variavel i para o movimento da rainha

    //informacao para onde a rainha ira se mover
    printf("Movento da Rainha.\n");
    printf("A Rainha ira se mover por 8 casas a esquerda.\n");
    
    //utilizei o do while para o movimento da rainha
    do
    {
        //esse printf informa a ditecao em que a rainha ira se mover
       printf("esquerda\n", i);
       i++;
       if (i < 8)
       {
        //
       }
       
    } while (i < 8);
    //esse printf informa para onde a rainha se movel
    printf("A Rainha se movel por 8 casas a esquerda\n");

    //printf informa o movimentação da torre
    printf("Movimeto da Torre.\n");
    printf("Mova a Torra por 5 casas a direita.\n");
    
    //utilizei o loop for para o movimento da torra
    for (int i = 0; i < 5; i++)
    {
        //esse printf informa a direcao da torre
        printf("direita\n");
 
    }
    //esse printf informa para onde a torre se movel
    printf("A Torre se movel por 5 casas a direita");
    

    return 0;
}