#include <stdio.h>
#include <stdlib.h>
main ()
{
	float num,resultado;
	printf ("Programa calcula o quadro de um numero\n");
	printf ("Favor insira um numero=");
	scanf ("%f",&num);
	resultado=num*num;
	printf ("O quadro deste numero e de =%f",resultado);
	
	system ("pause");
	return 0;
}
