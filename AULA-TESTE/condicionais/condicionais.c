#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, res;
    char escolha;

    printf("Bem Vindo a Calculadora Ultra Megazorde!\nDigite + para Soma\nDigite - para Subtrair\nDigite x para Multiplicar\nDigite / para Dividir\nDigite r para Raiz Quadrada\nDigite p para Potenciacao\nQual sua escolha? ");

    scanf("%c", &escolha);

    switch (escolha)
    {
    case '+':
        printf("Digite operando1: ");
        scanf("%f", &num1);
        printf("Digite operando2: ");
        scanf("%f", &num2);
        res = num1 + num2;
        break;
    case '-':
        printf("Digite operando1: ");
        scanf("%f", &num1);
        printf("Digite operando2: ");
        scanf("%f", &num2);
        res = num1 - num2;
        break;
    case 'x':
        printf("Digite operando1: ");
        scanf("%f", &num1);
        printf("Digite operando2: ");
        scanf("%f", &num2);
        res = num1 * num2;
        break;
    case '/':
        printf("Digite operando1: ");
        scanf("%f", &num1);
        printf("Digite operando2: ");
        scanf("%f", &num2);
        if (num2 == 0)
        {
            printf("Impossivel divisao por zero");
        }
        else
        {
            res = num1 / num2;
        }
        break;
    case 'r':
        printf("Digite operando1: ");
        scanf("%f", &num1);
        res = sqrt(num1);
        break;
    case 'p':
        printf("Digite operando1: ");
        scanf("%f", &num1);
        printf("Digite operando2: ");
        scanf("%f", &num2);
        res = pow(num1, num2);
        break;
    
    default:
        break;
    }
    
    return 0;
}