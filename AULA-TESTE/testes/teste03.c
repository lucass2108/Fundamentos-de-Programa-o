#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int* p = (int*)malloc(n*sizeof(int));
    int par = 0, impar = 0;

    for(int i =0; i< n; i++)
    {
        scanf("%d", p+i);
        if(p[i] % 2 == 0)
        {
            par++;
        } else
        {
            impar++;
        }
    }

    int* pares = (int*)malloc(par*sizeof(int));
    int* impares = (int*)malloc(impar*sizeof(int));
    int ip =0, ii = 0;

    for(int i = 0; i < n; i++)
    {
        if(p[i] % 2 == 0)
        {
            pares[ip] = p[i];
            ip++;
        }
        else
        {
            impares[ii] = p[i];
            ii++;
        }
    }

    if(par > 0)
    {
        for(int i = 0; i < par; i++)
        {
            printf("%d ", pares[i]);
        }
        printf("\n");
    }

    if(impar > 0)
    {
        for(int i = 0; i < impar; i++)
        {
            printf("%d ", impares[i]);
        }
        printf("\n");
    }

    free(p);
    free(pares);
    free(impares);

    
    return 0;
}
