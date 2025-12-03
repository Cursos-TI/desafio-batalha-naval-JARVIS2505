#include <stdio.h>

int main() {

    // 1. DECLARANDO O TABULEIRO 10X10
    int tabuleiro[10][10];

    // INICIALIZANDO O TABULEIRO COM ZEROS (ÁGUA)
    for (int i =; i < 10; i++) {
        for (int j = 0; j <10; j++) {
            tabuleiro[i][j] = 0; // 0 representa água
        }
    }

    // 2. NAVIOS TAM 3
    int navioHorizontal[3] = {3, 3, 3}; // Representa um navio horizontal de tamanho 3
    int navioVertical[3] = {4, 4, 4}; // Representa um navio vertical de tamanho 3

    // 3. COODENADAS INICIAIS
    int linhaH = 2, volunaH = 4; // Coordenadas para o navio horizontal
    int linhaV =6, colunaV =1; // Coordenadas para o navio vertical

    // 4. VALIDANDO LIMITES DO TABULEIRO
    if (colunaH + 2 >= 10) {
        printf("ERRO: Navio horizontal fora dos limites do tabuleiro.\n");
        return 1;
    }
    if (linhaV + 2 >= 10) {
        printf("ERRO: Navio vertical fora dos limites do tabuleiro.\n");
        return 1;
    }

    // 5. VERIFICANDO SOBREPOSIÇÃO
    for(int i =0; i < 3; i++){
        if(tabuleiro[linhaH][colunaH + i] == 3){
            printf("ERRO: Navio horizontal sobreposto.\n");
            return 1;
        }
    }
    
    for(int i =0; i < 3; i++){
        if(tabuleiro[linhaV + i][colunaV] == 4){
            printf("ERRO: Navio vertical sobreposto.\n");
            return 1;
        }
    }

    // 6. COLOCANDO OS NAVIOS NO TABULEIRO
    for(int i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
        
    }

    for(int i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];

    }

    // 7. EXIBINDO O TABULEIRO COM COORDENADAS
    printf("\n  A B C D E F G H I J\n");
    printf(" ---------------------\n");

    for(int i = 0; i < 10; i++){
        // imprime a numeração das linhas ( 1 a 10)
        if(i < 9)
        printf("%d|", i + 1);
        else
        printf("%d|", i + 1);

        // imprime cada coluna
        for(int j = 0; j <10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}
