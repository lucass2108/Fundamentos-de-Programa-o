#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf("%d", &n);

    int arr[n], arr2[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for(int i = 0; i < n; i++)
    {
        arr2[(i+k)%n] = arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }





    return 0;
}