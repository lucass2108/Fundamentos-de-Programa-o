#include <stdio.h>

int main()
{
    int m, d = 0;
    scanf("%d", m);

    int matriz[m][m];

    for(int i =0; i < m; i++)
    {
        for(int j; j < m; j++)
        {
            if(j < 0)
            {
                matriz[i][j] = 0;
            }
            else{
                scanf("%d", matriz[i][j]);
            }
        }
    }

    for(int i =0; i < m; i ++)
    {
        for(int j=0; j < m; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}