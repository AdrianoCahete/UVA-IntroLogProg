// College work for UVA 2023
// by Adriano Cahete -- https://github.com/AdrianoCahete / https://adrianocahete.dev/
//
// Source: https://github.com/AdrianoCahete/UVA-IntroLogProg/matrix
//
// I will use the same repo for everything, sorry for bad naming at the time. :(
//
// Yes, I put all my code and comments in english, sorry about that.
// To students: please, do not copy or your work will be flagged as plagiarism.

#include <stdio.h>

int main()
{
    // Outside of the scope, but why not? :)
    // int matrixX, matrixY, matrixMulti;

    int matrix[3][3];

start:
    printf("\n------------------------ \n");
    printf("  Gerador de Matriz ");
    printf("\n------------------------ \n\n");

    // Outside of the scope, but why not? :)
    // setmatrix:
    //     printf("Insira a Matriz [?][ ]:\n");
    //     scanf("%d", &matrixX);

    //     printf("Insira a Matriz [%d][?]:\n", &matrixX);
    //     scanf("%d", &matrixY);

    //     printf("Insira o multiplicador da Matriz:\n");
    //     scanf("%d", &matrixY);

inputop:
    //     printf("Insira os elementos da Matriz de %d x %d:\n", &matrixX, &matrixY);
    printf("Insira os elementos da Matriz de 3x3\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] *= 5; // matrixMulti
        }
    }

calculatematrix:
    printf("\nMatriz resultado (cada item multiplicado por 5):\n"); // matrixMulti
    for (int i = 0; i < 3; i++)
    {
        printf("\n----------------------------------\n|");
        for (int j = 0; j < 3; j++)
        {
            printf("    %d    |", matrix[i][j]);
        }
        printf("\n----------------------------------");
    }

    return 0;
}
