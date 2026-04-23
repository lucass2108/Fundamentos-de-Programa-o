#include <stdio.h>

int main()
{
    int n, k =1;
    scanf("%d", &n);

    int matriz[n][n];

    for(int i =0; i< n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (i > n-1)
            {
                break;
            }
            
            if(j == k)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
            printf("%d ", matriz[i][j]);
        }
        k++;
        printf("\n");
    }


    return 0;
}