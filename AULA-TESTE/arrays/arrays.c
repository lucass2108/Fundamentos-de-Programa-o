#include <stdio.h>
#include <math.h>

int main()
{   
    int n;
    scanf("%d", &n);

    float nums[n], soma;
    for(int i = 0; i < n; i++) {
        scanf("%f", &nums[i]);
        soma += nums[i];
    }

    printf("%.3f\n", soma);


    return 0;
}