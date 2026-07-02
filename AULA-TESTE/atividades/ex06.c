#include <stdio.h>
#include <string.h>

int main()
{
    char str[31], str2[31];
    scanf("%s", str);
    
    int tam = strlen(str);
    int tam2 = tam;
    
    for(int i = 0; i < tam; i ++)
    {
        str2[i] = str[tam2-1];
        tam2--;
    }
    
    if(strcmp(str, str2) == 0)
    {
        printf("ok");
    } else
    {
        printf("nok");
    }
    
    return 0;
}