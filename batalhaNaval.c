#include <stdio.h>
int main () {
    char linha [10] ={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    //CRIANDO O TABULEIRO MATRIZ (10 X 10)
    int tabuleiro [10][10];

    //POSIÇÃO DO NAVIO
    int navioHorizontal [3] = {3, 3, 3}; //posição do navio na horizontal
    int navioVertical [3] = {3, 3, 3}; //posição do navio na vertical
    for (int i = 0; i < 10; i++){
        for (int j = 0; j <10; j++){
            tabuleiro[i][j] = 0;

        }

    }
// Imprimindo o tabuleiro   

    printf("   ");//ESPAÇO PARA ALINHAR AS LINHAS.
    for (int c = 0; c < 10; c++){
        printf("%c ", linha[c]);
   }

   printf("\n");

   for (int i = 0; i < 10; i++){
        printf("%d", i + 1);

        for (int j = 0; j < 10; j++) {
            // Imprime o elemento atual seguido de um espaço
            printf("%d ", tabuleiro[i][j]);
        }
         printf("\n"); 
    }
        printf("\n");
      //posicionando o navio na matriz
    
        int tamanho = 3;

        //Navio na horizontal: fixo na linha 2, ocupando as colunas 3, 4 e 5 
    int linhaH = 2;
    int colunaH_inicial = 3;
    for (int k = 0; k < tamanho; k++) {
        tabuleiro[linhaH][colunaH_inicial + k] = 1; 
    }

    // Navio Vertical: fixo na Coluna 7, ocupando as linhas 5, 6 e 7
    int linhaV_inicial = 5;
    int colunaV = 7;
    for (int k = 0; k < tamanho; k++) {
        tabuleiro[linhaV_inicial + k][colunaV] = 1; 
    }
    // ========================================================
    // 4. IMPRIMINDO O TABULEIRO COM OS NAVIOS
    // ========================================================
    printf("--- TABULEIRO COM NAVIOS ---\n\n");
    printf("   "); 
    for (int c = 0; c < 10; c++) {
        printf("%c ", linha[c]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); 
    }
 return 0;
}