#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    float nums[n], media, desvio, soma = 0.0;

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &nums[i]);
        media += nums[i];
    }
    media/= n;

    for(int i = 0; i < n; i++)
    {
        soma += pow(nums[i] - media, 2);
    }
    desvio = sqrt(soma/n);

    printf("%.3f %.3f", media, desvio);

    return 0;
}