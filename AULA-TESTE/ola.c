#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Portuguese");
    // Comentário de uma linha
    /*
     * Comentário de várias linhas
     */
    printf("Olá, Mundo!\n");
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    int sum = num1 + num2;  
    printf("A soma de %d e %d é: %d\n", num1, num2, sum);
    printf("Teste\n");
    printf("Teste");
    return 0;
}