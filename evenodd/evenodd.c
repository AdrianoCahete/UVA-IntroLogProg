// College work for UVA 2023
// by Adriano Cahete -- https://github.com/AdrianoCahete / https://adrianocahete.dev/
//
// Source: https://github.com/AdrianoCahete/UVA-IntroLogProg
//
// Yes, I put all my code and comments in english, sorry about that.
// To students: please, do not copy or your work will be flagged as plagiarism.

#include <stdio.h>

char *isEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        return "Par";
    }
    else
    {
        return "Impar";
    }
}

int main()
{
    int startNum, endNum, evenCount = 0;

start:
    printf("\n------------------------ \n");
    printf("     Par ou Impar ");
    printf("\n------------------------ \n\n");

inputop:
    printf("Digite o numero inicial: ");
    scanf("%d", &startNum);

    printf("Digite o numero final: ");
    scanf("%d", &endNum);

    if (startNum > endNum)
    {
        printf("\n[Erro] O numero inicial deve ser menor ou igual ao numero final.\n\n");
        goto inputop;
    }

    for (int i = startNum; i <= endNum; i++)
    {

        char *status = isEvenOdd(i);
        printf("\n[Num] %d | %s", i, status);

        if (i % 2 == 0)
        {
            evenCount++;
        }
    }

    printf("\n[Pares totais] %d\n", evenCount);

    return 0;
}
