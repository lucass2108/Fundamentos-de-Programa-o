#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int numIt;
    float erro, x0, x1;
    bool raizEncontrada = false;

    scanf("%f %f %d", &x0, &erro, &numIt);

    for(int i=0; i < numIt; i++)
    {
        x1 = x0 - (5*x0*x0*x0+3*x0*x0-3)/(15*x0*x0+6*x0);
        if(fabs(x1 -x0) <= erro)
        {
            printf("%f", x1);
            raizEncontrada = true;
            break;
        }
        x0 = x1;
    }

    if(!raizEncontrada)
    {
        printf("Nao foi possivel calcular a raiz");
    }

    return 0;
}