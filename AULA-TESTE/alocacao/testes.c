#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int* p = &x;

    printf("%p\n", p);
    printf("%d\n", *p);


    printf("%p\n", (p + 1));
    printf("%d\n", *(p + 1));

    int* v = (int*)malloc(3 * sizeof(int));
    *v = 1;
    v[1] = 3;
    *(v+2) = 9;

    for (int i = 0; i < 3; i++) {
        printf("%d %p | ", v[i], &v[i]);
    }

    free(v);


    return 0;
}