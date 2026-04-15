#include <stdio.h>
#include <math.h>

int main()
{
  int n, maior = 0, pos;
  scanf("%d", &n);

  int nums[n];

  for(int i = 0; i < n; i++)
  {
    scanf("%d", &nums[i]);
  }

  for(int i = 0; i < n; i++)
  {
    if (nums[i] > maior)
    {
        maior = nums[i];
        pos = i;
    }
    
  }

      printf("%d %d", maior, pos);

    return 0;
}