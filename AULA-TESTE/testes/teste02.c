#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int tam = n;
    int* a = (int*)malloc(n*sizeof(int));

    for(int i =0; i < n; i++)
    {
        scanf("%d", &a[i]);

        for(int j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                tam--;
                break;
            }
        }
    }
    
    int* a2 = (int*)malloc(tam*sizeof(int));
    int rep, k = 0;

    
    for(int i =0; i < n; i++)
    {
        rep = 0;

        for(int j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                rep++;
                break;
            }
        }

        if(rep == 0)
        {
            a2[k] = a[i];
            k++;
        }
    }

    for(int i = 0; i < tam; i++)
    {
        printf("%d ", *(a2 + i));
    }



    return 0;
}