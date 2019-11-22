#include<stdio.h>
#include<stdlib.h>

main(void) 
{
     int idade;
     char nome[100];
     printf("digite o seu nome:\n ");
     scanf("%s",&nome);
      printf("digite a sua idade:\n");
     scanf("%d",&idade);
     printf("%s tem %d anos\n",nome,idade);
     system("pause");
     return 0;
}
