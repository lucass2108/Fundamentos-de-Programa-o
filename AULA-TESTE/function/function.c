#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void nr(float valorInicial, float erro, int qtdTentativas)
{
    bool encontrouRaiz = false;
    float valorAnterior = valorInicial;

    for(int i =0; i< qtdTentativas; i++)
    {
        valorInicial = valorAnterior - ((3*pow(valorAnterior,3)) + (2*pow(valorAnterior, 2)) - 7) / (9*pow(valorAnterior, 2) + 4*valorAnterior);
        if(fabs(valorAnterior - valorInicial) <= erro)
        {
            printf("Raiz: %f\n", valorInicial);
            encontrouRaiz = true;
            break;
        }

        valorAnterior = valorInicial;

    }

    if(!encontrouRaiz)
    {
        printf("Nao foi possivel calcular a raiz com a precisao solicitada.");
    }

}