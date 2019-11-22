#include <stdio.h>
#include <stdlib.h>
main ()
{
	float produto,percentual,desconto;
	printf ("Progrma desconto de produto\n");
	printf ("Favor insira o valor do produto =");
	scanf ("%f",&produto);
    printf ("Favor insira o valor do desconto desejado");
    scanf ("%f",&desconto);
    percentual=produto*desconto/100;
	printf ("O desconto e de =%f\n",percentual);
	printf ("O valor do produto  com o desconto  resultado e de =%f",produto-percentual);
	
	system ("pause");
	return 0;
	
}
