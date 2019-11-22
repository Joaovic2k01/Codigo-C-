#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "portuguese");
    int num,aux,reverso;
    printf("digite o numero\n");
    scanf("%d", &num);
    aux=num;
    reverso=0;
    while (aux !=0) {
          reverso = reverso * 10 + aux % 10;
          aux=aux /10;
          }
    if (reverso == num)
    printf("%d é palindromo\n", num);
  else
    printf("%d não é palindromo\n", num);

  return 0;
}

    
