#include <stdio.h>

int main()
{
    int num, res = 1;
    scanf("%d", &num);

    for(int i = 1; i<=num; i++)
    {
        if(num == 0)
        {
            break;
        }

        res *= i;
    }

    printf("%d", res);


    return 0;
}