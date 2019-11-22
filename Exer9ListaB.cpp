#include <stdio.h>
#include <stdlib.h>
main ()
{
	float num1,num2,num3,media;
	printf ("Program calculca media\n");
	printf ("Favor insira primeiro numero=");
	scanf ("%f",&num1);
	printf ("Favor insira um segundo numero=");
	scanf ("%f",&num2);
	printf ("Favor insira um terceiro numero=");
	scanf ("%f",&num3);
	media=(num1+num2+num3)/3;
	printf ("A media e= %f",media);
	
	system ("pause");
	return 0;
}
