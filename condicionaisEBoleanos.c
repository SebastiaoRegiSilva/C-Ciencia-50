#include <cs50.h>
#include <stdio.h>

int BuscarNumeroPositivo(void);

int main(void)
{
    // Solicita um caracter para o usuário para confirmar uma pergunta.
    char c = get_char("Você concorda?");

    // Verifica se concordou
    if (c == 'S' || c == 's')
    {
        printf("Concordo.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Não concordo..\n");
    }

    // While - Enquanto.
    bool testeWhile = (false);
    while (testeWhile == (false))
    {
        printf("Executou no bloco while!\n");
        testeWhile = (true);
    }
    printf("Saiu do bloco while!\n");

    // For, contador de 0 a 10.
    printf("Contador de zero a dez!\n");

    for (int i = 0; i <= 10; i++)
    {
        printf("%d \n", i);
    }

    // Solicita um número inteiro positivo ao usuário.
    //Uso da função
    int i = BuscarNumeroPositivo();

    printf("Esse é o número: %i\n", i);
}

// Uso das funções.
// Do-While faça enquanto.

// Solicita um número inteiro positivo ao usuário.
int BuscarNumeroPositivo(void)
{
    int n;
    printf("Solicitar um número positivo ao usuário!\n");
    do
    {
        n = get_int("Número positivo : \n");
    }
    while (n < 1);
    return n;
}