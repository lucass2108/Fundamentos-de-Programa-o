#include <stdio.h>
#include <math.h>

int main()
{
    int quantRef, quantDesc, preco;
    quantDesc = 0;
    preco = 0;
    
    scanf("%d", &quantRef);
    float pesos[quantRef];
    for(int i =0; i< quantRef; i++)
    {
       scanf("%f", pesos[i]); 
       preco += pesos[i];
       if(pesos[i] >= 300)
       {
           quantDesc++;
       }
    }
    
    preco /= 1000;
    preco *= 22.99;
    
    if(quantDesc >= 3)
    {
        preco = preco -(preco*0.12);
    }
    
    printf("%.2f", preco);
    
    return 0;
}