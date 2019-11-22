#include <stdio.h>
#include <stdlib.h>
main ()
{
	int n;
	printf ("Favor insira um numero:\n");
	scanf ("%d\n",&n);
	if (n % 2==0) {
	printf ("Seu numero e par=%d\n",n);
	}else{
		printf ("Seu numero e impar=%d\n",n);
	}
	
	system ("pause");
	return 0;
	
	
}

	
