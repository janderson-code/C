#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    // ------------
    // Usando Short para economizar memória
    // -------------

    int v1 = 2;
    int short v2 = 2;

    printf("Tamanho em int da v1 %i bytes\n", sizeof(v1));
    printf("Tamanho em int da v2 %i bytes\n", sizeof(v2)); // 2bytes

    // ------------
    // Estruturas de decisões
    // -------------

    // switch
    int opcao;

    printf("1 - Cadastrar produto\n2 - Vender produto\n3 - Buscar produto\n4 - Imprimir relatório\n5 - Sair");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        // seu código para o caso 1
        break;
    case 2:
        // seu código para o caso 2
        break;
    case 3:
        // seu código para o caso 3
        break;
    case 4:
        // seu código para o caso 4
        break;
    case 5:
        // seu código para o caso 5
        break;
    default:
        // para informar uma opção inválida
    }

    // ------------
    // Estruturas de repetições
    // -------------

    int i;

    printf("\nGerado com for: ");
    for (i = 0; i <= 10; i++)
        printf("%d ", i);

    i = 0;

    printf("\n\nGerado com while: ");
    while (i <= 10)
    {
        printf("%d ", i++); // observe o incremento da variável i
    }

    return 0;
}
