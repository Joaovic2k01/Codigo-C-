#include <stdio.h>
#include <stdlib.h>

main ()
{
	float num1,num2,adi,sub,mul,div;
	printf ("Program calcula todas operacoes\n");
	printf ("Favor insira um numero=");
	scanf ("%f",&num1);
	printf ("Favor insira um segundo numero=");
	scanf ("%f",&num2);
	adi=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	printf ("O resultado da soma e de =%f\n",adi);
	printf ("O resultado da subtracao e de =%f\n",sub);
	printf ("O resultado da multiplicacao e de =%f\n",mul);
	printf ("O resultado da divisa e de = %f\n",div);
	
	system ("pause");
	return 0;
}
