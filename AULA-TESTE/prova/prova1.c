#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int num;
    bool isPrimo;
    scanf("%d", &num);

    for(int i = 2; i<= num; i++)
    {
        isPrimo = true;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isPrimo = false;
                break;
            }
        }
        if(isPrimo)
        {
            printf("%d ", i);
        }

    }

    return 0;
}