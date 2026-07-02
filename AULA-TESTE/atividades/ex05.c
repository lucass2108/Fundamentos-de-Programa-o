#include <stdio.h>

int main()
{
    int n, x, xC;
    scanf("%d %d", &n, &x);
    xC = x;
    x *= n;
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", x);
        x-= xC;
    }
    
    return 0;
}