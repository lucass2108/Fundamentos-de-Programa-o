#include <stdio.h>

int main()
{
   int num, isPrimo = 1;

   scanf("%d", &num);


   if(num <= 1){
    isPrimo = 0;
   }
   else 
   {
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrimo = 0;
            break;
        }
    }
    }

   if(isPrimo == 1 || num == 2)
   {
       printf("ok");
   }
   else
   {
       printf("nok");
   }

    return 0;
}