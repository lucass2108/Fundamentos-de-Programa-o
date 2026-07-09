#include <stdio.h>

int main()
{
    float temps[24], media, maior = 0.0, menor = 256.0, qtdAlta = 0.0;

    for(int i = 0; i < 24; i++)
    {
        scanf("%f", &temps[i]);
        media += temps[i];

        if(temps[i] > maior)
        {
            maior = temps[i];
        }

        if(temps[i] < menor)
        {
            menor = temps[i];
        }
    }

    media /= 24;

    for(int i = 0; i < 24; i++)
    {
        if(temps[i] > media)
        {
            qtdAlta++;
        }
    }

    printf("%.2f %.2f %.2f %.0f", media, menor, maior, qtdAlta);

    return 0;
}
