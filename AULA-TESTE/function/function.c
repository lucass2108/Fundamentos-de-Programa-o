#include <stdio.h>
#include <math.h>

float desvioPadrao(float numeros[], int qtdNum)
{
    float media, desvio;

    for(int i =0; i<qtdNum; i++)
    {
        media += numeros[i];
    }
    media /= qtdNum;
    
    for (int i = 0; i < qtdNum; i++)
    {
        numeros[i] = pow(numeros[i] - media, 2);
        desvio += numeros[i];
    }

    return (float)sqrt(desvio / qtdNum);
}

int main()
{
    int num;
    scanf("%d", &num);
    float numeros[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%f", &numeros[i]);
    }

    printf("%.3f", desvioPadrao(numeros, num));


    return 0;
}