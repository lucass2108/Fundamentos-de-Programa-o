#include <stdio.h>
#include <math.h>

int main()
{   
    float temp[6], maior, menor = 100000, media;

    for(int i=0; i<6; i++)
    {
        scanf("%f", &temp[i]);
    }

    for(int i = 0; i<6; i++)
    {
        if(temp[i] > maior)
            maior = temp[i];
        
        if(temp[i] < menor)
            menor = temp[i];

        media += temp[i];
    }

    media = media / 6;

    printf("%.2f %.2f %.2f\n", menor, maior, media);
    if(media >= 18 && media <= 22)
    {
        printf("ok");
    }
    else
    {
        printf("nok");
    }




    return 0;
}