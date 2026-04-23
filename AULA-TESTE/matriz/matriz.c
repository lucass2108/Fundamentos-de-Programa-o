#include <stdio.h>
#include <Math.h>

int main()
{
    int matriz[7][7], k =0;

    for(int i =0; i< 7; i++)
    {
        for(int j = 0; j < 7; j++)
        {
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