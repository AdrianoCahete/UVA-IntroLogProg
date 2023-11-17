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

    clrscr();

    printf("Escolha uma operação mantemática: +, -, *, / \n");
    printf("1 [+]: Soma \n");
    printf("2 [/]: Subtração \n");
    printf("2 [/]: Multiplicação \n");
    printf("2 [/]: Divisão \n");

    scanf("%c", &op);

    if (op == '+' || op == '1')
    {
        printf("[+] Você selecionou Soma");
    }
    else if (op == '-' || op == '2')
    {
        printf("[-] Você selecionou Subtração");
    }
    else if (op == '*' || op == '3')
    {
        printf("[/] Você selecionou Multiplicação");
    }
    else if (op == '/' || op == '4')
    {
        printf("[/] Você selecionou Divisão");
    }

    scanf(" %d", &n1);
    scanf(" %d", &n2);
    // TODO: Check if is a number

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
