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

    printf("Escolha uma operacao matematica, usando os simbolos de cada uma: \n");
    printf("1 [+]: Soma \n");
    printf("2 [-]: Subtracao \n");
    printf("3 [*]: Multiplicacao \n");
    printf("4 [/]: Divisao \n\n");

    scanf("%c", &op);

    if (op == '+' || op == '1')
    {
        printf("[+] Voce selecionou Soma \n");
    }
    else if (op == '-' || op == '2')
    {
        printf("[-] Voce selecionou Subtracao \n");
    }
    else if (op == '*' || op == '3')
    {
        printf("[*] Voce selecionou Multiplicacao\n");
    }
    else if (op == '/' || op == '4')
    {
        printf("[/] Voce selecionou Divisao\n");
    }

    printf("    Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("    Digite o segundo numero: ");
    scanf("%d", &n2);

    // TODO: Check if is a number

    switch (op)
    {
    case '+':
    case '1':
        res = n1 + n2;
        printf("\n[=] A soma de %d mais %d e igual a %.2f \n\n----------\n", n1, n2, res);
        break;

    case '-':
    case '2':
        res = n1 - n2;
        printf("\n[=] A subtracao de %d menos %d e igual a %.2f \n\n----------\n", n1, n2, res);
        break;

    case '*':
    case '3':
        res = n1 * n2;
        printf("\n[=] A multiplicacao de %d por %d e igual a %.2f \n\n----------\n", n1, n2, res);
        break;

    case '/':
    case '4':
        res = n1 / n2;
        // TODO: Check if 0
        printf("\n[=] A divisao de %d por %d e igual a %.2f \n\n----------\n", n1, n2, res);
        break;
    }

    return 0;
}
