#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// GERANDO VALORES ALEATÓRIOS COM rand() e srand();

// No caso do rand pode ocorrer de gerar números repetidos,é necessário partir de algo para gerar;
/*

Para isso é necessário informar um valor que será diferente a cada iteração , neste exemplo é usado
o time(tempo do computador), com isso usamos o srand passando o time como parâmetro.

*/
int main()
{

    int i;
    int num2[10];

    srand(time(NULL));

    for (i = 0; i < 10; i++)
        num2[i] = rand();

    printf("\n\n");
    for (i = 0; i < 10; i++)
        printf("%d ", num2[i]);
    printf("\n\n");

    // gerando valores entre 0 e 99
    rand() % 100;

    return 0;
}

int main()
{

    int i;
    int num2[40];

    srand(time(NULL));

    for (i = 0; i < 40; i++)
        num2[i] = 1 + rand() % 99;

    printf("\n\n");
    for (i = 0; i < 40; i++)
        printf("%d ", num2[i]);
    printf("\n\n");

    return 0;
}