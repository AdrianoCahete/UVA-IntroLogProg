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
        return "par";
    }
    else
    {
        return "impar";
    }
}

int main()
{
    int startNum, endNum, evenCount = 0;

    printf("Digite o numero inicial: ");
    scanf("%d", &startNum);

    printf("Digite o numero final: \n");
    scanf("%d", &endNum);

    for (int i = startNum; i <= endNum; i++)
    {

        char *status = isEvenOdd(i);
        printf("Num: %d - %s\n", i, status);

        if (i % 2 == 0)
        {
            evenCount++;
        }
    }

    printf("Quantidade total de numeros pares: %d\n", evenCount);

    return 0;
}
