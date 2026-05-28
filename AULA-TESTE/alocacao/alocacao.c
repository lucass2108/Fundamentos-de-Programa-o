#include <stdio.h>

int trocar(int* i, int* j)
{
    int temp = *i;
    *i = *j;
    *j = temp;

    return 0;
}

int main()
{
    int i = 0;
    int j = 1;

    trocar(&i, &j);

    printf("%d %d",i , j);

    return 0;
}