// College work for UVA 2023
// by Adriano Cahete -- https://github.com/AdrianoCahete
//
// Yes, I put all my code and comments in english, sorry about that.
// And, please, do not copy or your work will be flagged as plagiarism.

#include <stdio.h>

int main()
{

    char op;
    int n1, n2;
    float res;

    printf("+, -, *, /");

    scanf("%c", &op);
    // TODO: Make selectable instead of wait for input

    scanf(" %d", &n1);
    scanf(" %d", &n2);
    // TODO: Check if is a number

    // TODO: Show chosen op

    switch (op)
    {
    case '+':
        res = n1 + n2;
        printf("%d + %d e %.2f", n1, n2, res);
        break;

    case '-':
        res = n1 - n2;
        printf("%d - %d e %.2f", n1, n2, res);
        break;

    case '*':
        res = n1 * n2;
        printf("%d x %d e %.2f", n1, n2, res);
        break;

    case '/':
        res = n1 / n2;
        // TODO: Check if 0
        printf(" %d / por %d e %.2f", n1, n2, res);
        break;
    }

    return 0;
}
