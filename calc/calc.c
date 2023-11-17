// College work for UVA 2023
// by Adriano Cahete -- https://github.com/AdrianoCahete
//
// Yes, I put all my code and comments in english, sorry about that.
// And, please, do not copy or your work will be flagged as plagiarism.

#include <stdio.h>

int main()
{

    int n1, n2;
    char op;

    float res;

start:
    printf("\n------------------------ \n");
    printf("     Calculadora ");
    printf("\n------------------------ \n\n");

inputop:
    printf("Escolha uma operacao matematica, usando os simbolos de cada uma: \n");
    printf("1 [+]: Soma \n");
    printf("2 [-]: Subtracao \n");
    printf("3 [*]: Multiplicacao \n");
    printf("4 [/]: Divisao \n\n");

    scanf("%c", &op);

    switch (op)
    {
    case '+':
    case '1':
        printf("[+] Voce selecionou Soma \n");
        break;

    case '-':
    case '2':
        printf("[-] Voce selecionou Subtracao \n");
        break;

    case '*':
    case '3':
        printf("[*] Voce selecionou Multiplicacao\n");
        break;

    case '/':
    case '4':
        printf("[/] Voce selecionou Divisao\n");
        break;

    default:
        printf("\n[?] Algo deu errado. Tem certeza que escolheu a operacao corretamente?\n\n");
        return 0;
    }

inputnum:
    printf("    Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("    Digite o segundo numero: ");
    scanf("%d", &n2);

    switch (op)
    {
    case '+':
    case '1':
        res = n1 + n2;
        printf("\n[=] A soma de %d mais %d e igual a %.2f", n1, n2, res);
        printf("\n\n ------------------------ \n");
        break;

    case '-':
    case '2':
        res = n1 - n2;
        printf("\n[=] A subtracao de %d menos %d e igual a %.2f", n1, n2, res);
        printf("\n\n ------------------------ \n");
        break;

    case '*':
    case '3':
        res = n1 * n2;
        printf("\n[=] A multiplicacao de %d por %d e igual a %.2f", n1, n2, res);
        printf("\n\n ------------------------ \n");
        break;

    case '/':
    case '4':
        if (n2 == 0)
        {
            printf("\n[=] O divisor nao pode ser 0, nao e possivel dividir por zero. Digite outro valor: ");
            scanf("%d", &n2);
        }

        res = (double)n1 / (double)n2;
        printf("\n[=] A divisao de %d por %d e igual a %.2f", n1, n2, res);
        printf("\n\n ------------------------ \n");
        break;

    default:
        printf("\n[?] Algo deu errado. Tem certeza que escolheu a operacao corretamente?");
    }

    return 0;
}
