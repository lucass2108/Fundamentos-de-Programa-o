#include <stdio.h>
#include <string.h>


int main()
{
    char nome[4];
    //scanf("%s", nome);
    fgets(nome, 4, stdin);
    printf("%s\n", nome);

    return 0;
}