#include<stdio.h>

float n1,
      n2,
      soma,
      sub,
      div,
      mult;

main()
{
    printf("Entre com o valor de N1: \n");
    scanf("%f",&n1);
    printf("Entre com o valor de N2: \n");
    scanf("%f",&n2);
    
    soma = n1+n2;
    mult = n1*n2;
    div = n1/n2;
    sub = n1-n2;

    printf("Resultado da SOMA: %.2f \n",soma);
    printf("Resultado da MULTIPLICACAO: %.2f \n",mult);
    printf("Resultado da SUBTRACAO: %.2f \n",sub);
    printf("Resultado da DIVISAO: %.2f \n",div);

   
}