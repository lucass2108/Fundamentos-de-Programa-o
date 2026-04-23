#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int matriz[m][n];
    int matrizT[n][m];

    for(int i = 0; i< m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d" , &matriz[i][j]);
        }
    }

    for(int i =0; i < m; i++)
    {
        for(int j =0; j < n; j++)
        {
            matrizT[j][i] = matriz[i][j];
        }
    }

    for(int i = 0; i< m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%3d " , matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i =0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%3d " , matrizT[i][j]);
        }
        printf("\n");
    }

    printf("\n");



    return 0;
}