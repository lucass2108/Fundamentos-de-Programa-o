#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    m = n -1;
    
    int matriz[n][n];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == m)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
        m--;
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%2d", matriz[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}