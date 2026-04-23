#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", x*i);
    }
    

    return 0;
}