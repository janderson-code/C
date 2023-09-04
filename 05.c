#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// MATRIZES

int main()
{

    // matriz de inteiros 3 por 3 com 9 elementos
    int mat[3][3] = {1, 2, 3,
                     4, 5, 6,
                     7, 8, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", mat[i][j]);
            printf("\n");
        }
    }

    return 0;
}

// int main()
// {

//     int i, j, mat1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     char mat5[3][4] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};

//     for (i = 0; i < 3; i++)
//     {                           // índice das linhas
//         for (j = 0; j < 3; j++) // índice das colunas
//             printf("%d ", mat1[i][j]);
//         printf("\n");
//     }

//     printf("\n\n");
//     for (i = 0; i < 3; i++)
//     {                           // índice das linhas
//         for (j = 0; j < 4; j++) // índice das colunas
//             printf("%c ", mat5[i][j]);
//         printf("\n");
//     }

//     return 0;
// }