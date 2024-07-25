#include<stdio.h>

float moeda_r,
      moeda_d;

main()
{
    printf("Insira o valor da moeda em real:");
    scanf("%f",&moeda_r);

    moeda_d = moeda_r /5.60;

    printf("Resultado da conversao: %f",moeda_d);
}