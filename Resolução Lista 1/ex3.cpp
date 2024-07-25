#include<stdio.h>

float n1,
      n2,
      n3,
      soma,
      mult;

main()
{
    printf("Entre com o valor de N1: \n");
    scanf("%f",&n1);
    printf("Entre com o valor de N2: \n");
    scanf("%f",&n2);
    printf("Entre com o valor de N3: \n");
    scanf("%f",&n3);

    soma = n1+n2+n3;
    mult = n1*n2*n3;

    printf("Resultado da SOMA: %.2f \n",soma);
    printf("Resultado da MULTIPLICACAO: %.2f \n",mult);

    if (soma < 10.0)
    {
        printf(" SOMA Menor que 10 \n");
    }
   else if (soma >= 10.0 && soma <= 20.0)
    {
        printf("SOMA Entre 10 e 20 \n");
    }
    else
    {
        printf(" SOMA Maior que 20 \n");
    }
    if (mult >= 10)
    {
        printf("MULT Maior que 10 \n");
    }
    else
    {
        printf("MULT menor que 10 \n");
    }
}