#include<stdio.h>
#include<stdlib.h>

main(void) 
{
     float n;
     printf("digite o numero : ");
     scanf("%f",&n);
     printf("Antecessor: %f e Sucessor: %f\n", n-1 , n+1);
     system("pause");
     return 0;
}
