#include <stdio.h>

int main () {
    char linha [10] ={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    //CRIANDO O TABULEIRO MATRIZ (10 X 10)
    int tabuleiro [10][10];
    //Posição da matriz
    int tamanho = 3;
    
    //POSIÇÃO DO NAVIO
    int navioHorizontal [3] = {3, 3, 3}; 
    int navioVertical [3] = {3, 3, 3}; 
    
    //navio na horizontal
    int linhaH = 2;
    int colunaH_inicial = 3;
    
    //Navio na vertical
    int linhaV_inicial = 5;
    int colunaV = 7;
    
    //Navio diagonal principal (Esquerda para Direita)
    int nav1_line = 4;
    int nav1_coluna = 2;
    
    //Navio diagonal secundario (Direita para Esquerda)
    int nav2_line = 7;
    int nav2_coluna = 4; 

    // Logica e impressão do tabuleiro vazio.
    printf("--------BATALHA NAVAL -------------\n");
    printf("      Tabuleiro vazio!\n");

    // Inicializa o tabuleiro zerado
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // IMPRIME TABULEIRO VAZIO
    printf("   ");
    for (int c = 0; c < 10; c++){
        printf("%c ", linha[c]);
    }
    printf("\n");
       
    for (int i = 0; i < 10; i++){
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); 
    }
    printf("\n");

    // POSICIONAMENTO DOS NAVIOS 
  
    // 1. Navio na horizontal
    for (int k = 0; k < tamanho; k++) {
        tabuleiro[linhaH][colunaH_inicial + k] = 3; 
    }

    // 2. Navio Vertical
    for (int k = 0; k < tamanho; k++) {
        tabuleiro[linhaV_inicial + k][colunaV] = 3; 
    }

    // 3. Navios nas Diagonais
    for (int x = 0; x < tamanho; x++){
        // Diagonal Principal 
        tabuleiro[nav1_line + x][nav1_coluna + x] = 3;
        
        // Diagonal Secundária 
        tabuleiro[nav2_line + x][nav2_coluna - x] = 3; 
    }

    // 4. IMPRIMINDO O TABULEIRO COM OS NAVIOS
    
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