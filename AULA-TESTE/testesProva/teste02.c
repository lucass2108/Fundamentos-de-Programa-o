#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct{
        char placa[9];
        int tempEstacionado;
    } Carro;

    Carro carros[30], carroMaiorTempo;
    int maiorTempo = 0, qtd5hrs = 0;
    float lucro = 0.0;

    for(int i =0; i < 30; i++)
    {
        fgets(carros[i].placa, 9, stdin);
        carros[i].placa[strcspn(carros[i].placa, "\n")] = '\0'; // Remove newline character
        scanf("%d", &carros[i].tempEstacionado);
        getchar();

        lucro += carros[i].tempEstacionado*8;

        if(carros[i].tempEstacionado > maiorTempo)
        {
            maiorTempo = carros[i].tempEstacionado;
            carroMaiorTempo = carros[i];
        }

        if(carros[i].tempEstacionado > 5)
        {
            qtd5hrs++;
        }

    }

    printf("%d %s %.2f", qtd5hrs, carroMaiorTempo.placa, lucro);


    return 0;
}