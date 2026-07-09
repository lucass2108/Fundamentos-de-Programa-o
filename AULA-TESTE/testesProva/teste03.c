#include <stdio.h>
#include <string.h>

int main()
{
    char str[31], str2[31];

    fgets(str, 31, stdin);
    str[strcspn(str, "\n")] = '\0';

    int tam = strlen(str);

    for (int i = 0; i < tam; i++)
    {
        str2[i] = str[tam - 1 - i];
    }
    str2[tam] = '\0';

    if (strcmp(str, str2) == 0)
    {
        printf("ok");
    }
    else
    {
        printf("nok");
    }

    return 0;
}