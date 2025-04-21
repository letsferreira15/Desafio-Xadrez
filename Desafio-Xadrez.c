#include <stdio.h>

void movimentoTorre(int torre){

    if (torre > 0)
    {
        movimentoTorre(torre - 1);
        printf("Torre movendo para a posição %d, direita\n", torre);   
    }
}


void movimentoBispo(int bispo){

    if (bispo > 0)
    {
        movimentoBispo(bispo - 1);
        printf("Bispo movendo para a posição %d, diagonal (cima, direita)\n", bispo);
    }
}


void movimentoRainha(int rainha){

    if (rainha > 0)
    {
        movimentoRainha(rainha - 1);
        printf("Rainha movendo para a posição %d, esquerda\n", rainha);
    }
}


int main() {

    int option;

    // Exibindo o menu interativo;

    printf("** Escolha uma peça para mover **\n\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");

    printf("\nEscolha: ");
    scanf("%d", &option);


    switch (option) {

        case 1: // Torre

            printf("\nMovimento da Torre:\n");
            movimentoTorre(5);
            
        break;

        case 2: // Bispo

            printf("\nMovimento do Bispo:\n");
            movimentoBispo(5);
            
        break;

        case 3: // Rainha

            printf("\nMovimento da Rainha:\n");
            movimentoRainha(8);
    
        break;

        case 4: // Cavalo

            printf("\nMovimento do Cavalo:\n");

        // Loop for para o movimento do cavalo para cima;

            for (int cavaloCima = 1; cavaloCima <= 2; cavaloCima++)
            {
                printf("Cavalo movendo para a posição %d, cima\n", cavaloCima);
            }
    
        // Loop while para o movimento do cavalo para a esquerda;
            
            int cavaloDireita = 1;
            while (cavaloDireita <= 1){
                printf("Cavalo movendo para a posição %d, direita\n", cavaloDireita + 2); // + 2 para ajustar a contagem;
                cavaloDireita++;
            }

        break;

        default:

            printf("Opção inválida!\n");
    
        break;
        }

    
    // Fim do programa;
    return 0;
}