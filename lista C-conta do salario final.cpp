#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    float reajuste,salario;
    printf("informe seu salario");
    scanf("%f", &salario);
    if (salario < 300) {
    reajuste == salario * 0,5;
    printf(" o seu salario final foi de %f\n", reajuste);}
    else {
    reajuste == salario * 0,3;
     printf(" o seu salario final foi de %f\n", reajuste);}
     system("pause");
     return 0;
}
    
    
    
    
