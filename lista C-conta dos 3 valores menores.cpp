#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,soma;
	 printf("informe o primeiro valor " );
    scanf("%d", &a);
    
    printf("informe o segundo valor " );
    scanf("%d", &b);
    
     printf("informe o terceiro valor " );
    scanf("%d", &c);
    
     printf("informe o quarto valor " );
    scanf("%d", &d);
    if{ ((a > b) && (a > c) && (a >d))
    soma = b+c+d;
   printf("o valor da soma foi %d", b+c+d);}
    if {((b > a) && (b > c) && (b >d))
    soma = a+c+d;
   printf("o valor da soma foi %d", a+c+d);}
   if {((c > a) && (c > b) && (c >d))
    soma = b+a+d;
   printf("o valor da soma foi %d", b+d+a);}
   if {((d > b) && (d > c) && (d >a))
    soma = b+c+a;
   printf("o valor da soma foi %d", a+c+b);}
   
   system("pause");
   return 0;
}
