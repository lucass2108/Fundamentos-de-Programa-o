#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct
    {
        char nome[41];
        float preco;
        int quant;
    } Produto;

    int n, etqMenor5 = 0;
    float valorEtq = 0.0, maisCaroValor = 0.0;
    scanf("%d", &n);

    Produto produtos[n], maisCaro;
    for (int i = 0; i < n; i++)
    {
        getchar();
        fgets(produtos[i].nome, 41, stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

        scanf("%f %d", &produtos[i].preco, &produtos[i].quant);

        if (produtos[i].preco > maisCaroValor)
        {
            maisCaroValor = produtos[i].preco;
            maisCaro = produtos[i];
        }

        if (produtos[i].quant < 5)
        {
            etqMenor5++;
        }

        valorEtq += produtos[i].preco * produtos[i].quant;
    }

    printf("%s %.2f %d", maisCaro.nome, valorEtq, etqMenor5);

    return 0;
}