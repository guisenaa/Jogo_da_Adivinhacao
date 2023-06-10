
// Este projeto é um jogo da Adivinhação, o usuário terá 7 tentativas para acertar o número aleatório gerado pelo código abaixo!
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num_gerado, tentativas, entrada_player;
    
    printf("Seja Bem-Vindo ao Jogo da Adivinhação!\n");
    printf("Será sorteado um número de 0 à 100 e você terá apenas 7 tentativas para adivinhar qual o número sorteado!\n");
    printf("Vamos lá!!\n");
    
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    num_gerado = (rand() % 101) + 1; // Gera um número aleatório entre 1 e 100
    tentativas = 7; // Define o número de tentativas como 7
    
    while (tentativas != 0)
    {
        tentativas --; // Decrementa o número de tentativas
        
        printf("Qual número você acha que foi sorteado?: ");
        scanf("%i", &entrada_player); // Lê o número inserido pelo jogador
        
        if(entrada_player > 100) // Verifica se a entrada do jogador é maior que o maior número possível a ser sorteado
        {printf("Número inválido! Escolha um número de 0 a 100\n");}
        
        else if(entrada_player == num_gerado) // Testa se o número do jogador é igual o número sorteado
        {
            printf("Parabéns, você acertou o número sorteado: %i!!\n", num_gerado);
            break; // Sai do loop se o jogador acertar o número
        }
        
        else if(entrada_player < num_gerado) // Testa se o número do jogador é menor que o número sorteado
        {
            printf("Número errado, o numero sorteado é maior do que o que você tentou.\n");
        }
        
        else if(entrada_player > num_gerado) // Testa se o número do jogador é maior que o número sorteado
        {
            printf("Número errado, o número sorteado é menor do que o que você tentou.\n");
        }
        
        printf("Você ainda tem %i tentativas\n", tentativas);
    }
    
    if(tentativas == 0)
    {printf("Suas tentativas acabaram. O número sorteado era: %i\n", num_gerado);}
    
    printf("GAME OVER!\n");
    

    return 0;
}
