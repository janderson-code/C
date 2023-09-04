#include <stdio.h>

int main()
{
    // ------------
    // Variáveis
    //-------------

    int idade = 25;
    int idadeP = &idade;
    printf("Hello World => %i\n", idade);
    printf("Hello World => %i\n", idadeP);

    float decimal = 10.5;
    printf("%f", decimal);

    char letra9 = 'a';
    printf("%c", letra9);

    // ------------
    // Entrada e Saída de dados Scanf
    // -------------

    int base;
    int altura;
    int area;

    printf("\nDigite o valor da Base:");
    scanf("%i", &base);
    printf("\n Digite a altura:");
    scanf("%i", &altura);
    area = base * altura;
    printf("O valor da área do Retangulo é = %i", area);

    int num1, num2, num3;
    printf("Digite três valores inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("Valores lidos: %d, %d e %d\n", num1, num2, num3);

    // Getchar

    printf("Digite um caracter");
    char letra;
    letra = getchar();
    scanf("%c");
    printf("Caracter digitado %c\n", letra);

    // getc
    printf("digite algo:\n");
    char letra2 = getc(stdin);
    scanf("%c");
    printf("Caractere digitado %c\n", letra2);

    // fgetc
    printf("Digite um caracter: ");
    char letra3 = fgetc(stdin);
    scanf("%c");
    printf("Caracter digitado: %c\n", letra3);

    char sexo;
    int idade;
    float peso, altura;

    // Limpando buffer do teclado com espaço depois do ultimo %f e antes do %c
    printf("Digite sua idade, peso, altura e seu sexo f ou m: ");
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);
    printf("Sexo: %c\nIdade: %d\nPeso: %.2f\nAltura: %.2f\n", sexo, idade, peso, altura);

    // Limpando Buffer do teclado com scanf

    char letra4, letra5;
    // leitura do primeiro caracter
    printf("Digite um caracter: ");
    scanf("%c", &letra4);

    // lendo um caracter sem salvar
    // scanf("%c",'');

    printf("Digite outro caracter: ");
    scanf("%c", &letra5);

    // Verificando Tamanho de um Tipo e variavel

    // float x;
    // x = 5;
    // printf("Tamanho da variavel x %f\n", sizeof(x));
    // printf("Tamanho da variavel do tipo int %i\n", sizeof(float));


    return 0;
}
