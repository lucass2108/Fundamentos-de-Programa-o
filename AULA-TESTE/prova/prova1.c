#include <stdio.h>
#include <math.h>

int main()
{
    float num, soma, i;
    while (num >=0)
    {
        scanf("%f", &num);
        if (num >= 0)
        {
            soma += num;
            i++;
        }
    }

    printf("%.2f", soma/i);
    
    
    return 0;
}