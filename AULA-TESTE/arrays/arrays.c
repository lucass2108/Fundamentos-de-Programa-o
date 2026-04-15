#include <stdio.h>

int main()
{
    int numNotas;
    scanf("%d", &numNotas);

    float notas[numNotas], media;
    media = 0;

    for(int i=0; i < numNotas; i++)
    {
        scanf("%f", &notas[i]);
    }

    for(int i=0; i < numNotas; i++){
        media += notas[i];
    }

    media /= numNotas;

    for (int i = 0; i < numNotas; i++)
    {
        if (notas[i] > media)
        {
            printf("%.2f ", notas[i]);
        }
        
    }
    
}