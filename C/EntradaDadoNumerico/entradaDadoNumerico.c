#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv)
{
    // Apresentação da aplicação.
    printf("Programa para comunicação entre terminal e a aplicação!\n");
    printf("Entrada e tratamento de dados numéricos\n");

    // Tipos inteiros.
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);

    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);

    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX); // Casting
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);

    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);

    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);

    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);

    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);

    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    // Tipos ponto flutuante.
    printf("Tamanho de armazenamento para float : %lu \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("FLT_MIN    :   %g\n", (float) -FLT_MIN);

    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Valor de precisão: %d\n", FLT_DIG );

    return 0;
}

// Toda vez que for rodar a aplicação, executar o "make.nomeDoArquivo" para compilar o código em linguagem de máquina, gerando um arquivo binário e depois "./nomeDoArquivo".
// Caso não for o nome do arquivo arquivo.c vai dar erro.

// Marcadores %f  para flutuadores, duplos.
// Marcadores %d  para characteres e unsigned short).
// Marcadores %ld para longos.
// Marcadores %u para unsigned int.
// Marcadores %lu para unsigned long.
// Marcadores %g  para flutuantes e doubles.