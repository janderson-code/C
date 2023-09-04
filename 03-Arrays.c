#include <stdio.h>

int main(int argc, char const *argv[])
{
    // ------------
    // Arrays
    // -------------

    int vIdade[10];
    int vIdade2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // vetor do tipo inteiro chamado num1 com tamanho 10.
    int num1[10];

    /* vetor do tipo inteiro chamado num2. Observe que não foi informado o tamanho mas foi informado um conjunto de dados. Neste caso o vetor terá o mesmo tamanho do conjunto informado, tamanho 5.
     */
    int num2[] = {1, 2, 3, 4, 5};

    /* vetor do tipo inteiro chamado num3. Observe que foi informado o tamanho do vetor e um conjunto de dados MENOR que o tamanho do vetor. Neste caso as duas posições finais do vetor, índices 3 e 4, serão preenchidas com zero.
     */
    int num3[5] = {1, 2, 3};

    /* vetor do tipo inteiro chamado num4. Observe que foi informado o tamanho do vetor e um conjunto de dados MAIOR que o tamanho do vetor. Neste caso é considerado o tamanho informado entre o par de colchetes. Assim, os elementos excedentes no conjunto serão perdidos, neste caso e elemento 6.
     */
    int num4[6] = {1, 2, 3, 4, 5, 6};

    /* vetor do tipo inteiro chamado num5. Observe que foi informado o tamanho do vetor e um conjunto de dados menor que o tamanho do vetor. Neste caso, como já vimos, as demais posições serão preenchidas com zero, preenchendo todo o vetor com zero.
     */
    int num5[5] = {0};

    char letras1[100]; // vetor do tipo char chamado letras1 com tamanho 100.

    /* vetor do tipo char chamado vogais com tamanho 5. Observe que para informar um conjunto de caracteres, cada um precisa estar entre aspas simples.
     */
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    float notas[3] = {7.3, 8.5, 4.6}; // vetor do tipo float chamado notas e preenchido com três notas.

    int vetor[10];

    printf("Digite um valor: ");
    scanf("%d", &vetor[0]); // salva o número digitado na primeira posição do vetor.

    printf("Digite um valor: ");
    scanf("%d", &vetor[1]); // salva o número digitado na segunda posição do vetor.

    int i, vetor4[10];

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor4[i]); // salva o número digitado na posição i do vetor
    }

    int vetor5[10];

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor do indice %d: ", i);
        scanf("%d", &vetor5[i]); // salva o número digitado na posição i do vetor
    }
    printf("\n\n");

    for (int i = 0; i < 10; i++)
        printf("valor %d\n", vetor5[i]);

    printf("\n\n");

    // vetor tipo int com 10 elementos
    int vetor[] = {3, 67, 9, 72, 10, 3, 52, 15, 49, 92};
    int i, vetor[] = {3, 67, 9, 72, 10, 3, 52, 15, 49, 92};

    for (i = 0; i < 10; i++)
        vetor[i] = vetor[i] * 3; // vetor na posição i recebe vetor na posição i vezes 3

    return 0;
}
