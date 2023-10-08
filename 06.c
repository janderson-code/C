#include <stdio.h>
#include <stdlib.h>

// STRINGS

int main()
{
    char palavras[] = {"Botando nelas"};
    printf("%s", palavras);
    /* code */

    char palavras2[100];
    scanf("%s", palavras2);
    return 0;
}

int main()
{

    char palavras[10] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    gets(palavras);

    printf("%s\n\n", palavras);

    return 0;
}

// Lendo o fim de uma string
int main()
{

    int i;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    fgets(palavras, 55, stdin); // file

    i = 0;
    // \0 -> caracter que indica o fim de string
    // enquanto palavras[i] for diferente do fim de string...
    while (palavras[i] != '\0')
    {
        printf("%d = %d\n", i, palavras[i]);
        i++;
    }
    printf("\n");

    return 0;
}