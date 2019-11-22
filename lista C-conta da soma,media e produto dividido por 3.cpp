#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c,soma,media,produto;

	   
    printf("informe o primeiro valor " );
    scanf("%d", &a);
    
    printf("informe o segundo valor " );
    scanf("%d", &b);
    
     printf("informe o terceiro valor " );
    scanf("%d", &c);
    soma = a+b+c;
    printf("a soma dos valores foi %d \n",soma );
    media = (a+b+c)/3;
    printf("a media dos valores foi %d \n",media);
    produto = a * b * c;
    printf("o produto dos valores foi %d\n",produto);
    
    
    return 0;
}
