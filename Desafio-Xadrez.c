#include <stdio.h>

int main(){

    int option; // Variavel usada para o menu interativo;


    // Inicializando com um menu;

    printf("** Escolha uma peça do xadrez para mover ** \n\n");

    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");

    printf("\nEscolha: ");
    scanf("%d", &option);


    switch (option)
    {
        case 1: //Torre;
        
    printf("\nMovimento da Torre:\n");

    int torre = 1;
    while (torre <= 5)
    {
        printf("Torre movendo para a posição %d, direita\n", torre);
        torre++;
    }
        break;
        case 2: //Bispo;

    printf("\nMovimento do Bispo:\n");

    int bispo = 1;
    do
    {
        
        printf("Bispo movendo para a posição %d, diagonal (cima, direita)\n", bispo);
        bispo++;

    }while (bispo <= 5);
    
        break;
        case 3: //Rainha;

    printf("\nMovimento da Rainha: \n");

    for (int rainha = 1; rainha <= 8; rainha++)
    {
        printf("Rainha movendo para a posição %d, esquerda\n", rainha);
    }
        break;
        default:

        printf("Opcão inválida. Tente novamente.\n");

        break;
    }


    //Fim do programa;
    return 0;
}