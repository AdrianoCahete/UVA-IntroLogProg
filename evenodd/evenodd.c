// College work for UVA 2023
// by Adriano Cahete -- https://github.com/AdrianoCahete / https://adrianocahete.dev/
//
// Source: https://github.com/AdrianoCahete/UVA-IntroLogProg
//
// Yes, I put all my code and comments in english, sorry about that.
// To students: please, do not copy or your work will be flagged as plagiarism.

#include <stdio.h>

char* isEvenOdd(int num)
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

    printf("Digite o número inicial: ");
    scanf("%d", &startNum);

    printf("Digite o número final: ");
    scanf("%d", &endNum);

    for (int i = startNum; i <= endNum; i++)
    {

        char *status = isEvenOdd(i);
        printf("Número: %d - %s\n", i, status);

        if (i % 2 == 0)
        {
            evenCount++;
        }
    }

    return 0;
}
