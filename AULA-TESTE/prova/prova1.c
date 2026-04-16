#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n = 0, soma, produto = 1;
    while(n <= 0){
          scanf("%d", &n);
    }

    for(int i = 1; i<=n; i++)
    {
        soma += i;
        produto *= i;
    } 

    printf("%d %d", soma, produto);

    return 0;
}