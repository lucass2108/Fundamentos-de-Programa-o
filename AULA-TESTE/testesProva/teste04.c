#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct {
        char nome[31];
        float peso;
    } Pessoa;

    Pessoa pessoas[20], maisForte;
    float maiorPeso = 0.0, media = 0.0;
    int mais100 = 0, maiorMedia = 0;

    for(int i =0; i < 20; i++)
    {
        fgets(pessoas[i].nome, 31, stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';
        scanf("%f", &pessoas[i].peso);
        getchar();

        if(pessoas[i].peso > maiorPeso)
        {
            maisForte = pessoas[i];
            maiorPeso = pessoas[i].peso;
        }

        if(pessoas[i].peso > 100)
        {
            mais100++;
        }

        media += pessoas[i].peso;
    }

    media /= 20;

    for(int i = 0; i < 20; i++)
    {
        if(pessoas[i].peso > media)
        {
            maiorMedia++;
        }
    } 

    printf("%s %.2f %d %d", maisForte.nome, media, maiorMedia, mais100);

    return 0;
}