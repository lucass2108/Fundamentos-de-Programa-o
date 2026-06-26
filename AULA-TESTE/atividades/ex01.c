#include <stdio.h>

int main()
{
    int n, desc = 0;
    float soma = 0, menor = 10000000;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        float p;
        scanf("%f", &p);
        
        if(p < menor)
        {
            menor = p;
        }
        
        if(p >= 250)
        {
            desc++;
        }
        
        soma += p;
    }
    
    soma /= 1000;
    menor /= 1000;
    soma *= 79.99;
    menor *= 79.99;
    
    
    if(desc > 3)
    {
        soma = soma - (menor/2);
        printf("%.2f", soma);
    } else
    {
        printf("%.2f", soma);
    }
    
    
    return 0;
}