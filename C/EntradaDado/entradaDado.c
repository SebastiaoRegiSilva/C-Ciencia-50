#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Duas strings.
    printf("Programa para comunicação entre terminal e a aplicação!\n");
    string nome = get_string("Qual é seu nome? \n");
    string sobreNome = get_string("Qual é o seu sobrenome? \n");
    printf("Olá, %s %s, seja bem vindo! \n" ,nome, sobreNome);
}

// Toda vez que for rodar a aplicação, executar o "make.nomeDoArquivo" para compilar o código em linguagem de máquina, gerando um arquivo binário e depois "./nomeDoArquivo".
// Caso não for o nome do arquivo arquivo.c vai dar erro.
//  Marcadores %s  para strings.