#include <stdio.h>

int main()
{
    int t, indice, menor = 9999999;
    scanf("%d", &t);
    
    int nums[t];
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &nums[i]);
        if(nums[i] < menor)
        {
            menor = nums[i];
            indice = i;
        }
    }
    
    printf("%d %d", menor, indice);
    
    
    return 0;
}