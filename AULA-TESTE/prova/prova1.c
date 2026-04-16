#include <stdio.h>
#include <math.h>

int main()
{
    float num, soma, d=1.0;
    scanf("%f", &num);

    for(int i = 1.0; i <= num; i++)
    {
        soma += d/i;
        d += 2.0;
    }
    
    printf("%.3f\n", soma);
    
    return 0;
}