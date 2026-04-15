#include <stdio.h>

int main()
{
    float notas[10];

    for(int i=0; i < 10; i++)
    {
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if(notas[i] >= 6)
            printf("%.2f ", notas[i]);
    }
    

    return 0;
}