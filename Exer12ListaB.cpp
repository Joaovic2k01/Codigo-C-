#include <stdio.h>
#include <stdlib.h>
main ()
{
	float saldo,percentual;
	printf ("Progrma calcula o reajuste do saldo de 2%\n");
	printf ("Favor insira o saldo =");
	scanf ("%f",&saldo);
    percentual=2;
	printf ("O valor desse reajuste e de =%f",saldo*percentual/100);
	
	system ("pause");
	return 0;
	
}
