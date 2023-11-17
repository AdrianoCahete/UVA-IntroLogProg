#include <stdio.h>

int main()
{

    char op;
    int n1, n2;
    float res;

    printf("+, -, *, /");
    scanf("%c", &op);

    scanf(" %d", &n1);
    scanf(" %d", &n2);

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
        printf(" %d / por %d e %.2f", n1, n2, res);
        break;
        return 0;
    }
}
