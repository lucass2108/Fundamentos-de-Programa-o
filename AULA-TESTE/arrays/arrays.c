#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], arr2[n], arr3[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < n; i++)
    {
        arr3[i] = arr[i] + arr2[i];
        printf("%d ", arr3[i]);
    }


    

    return 0;
}