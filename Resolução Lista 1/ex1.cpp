#include<stdio.h>

float raio,
      vol,
      area;

main()
{
    printf("Entre com o valor do RAIO: \n");
    scanf("%f",&raio);

    vol = (4.0/3.0) * 3.14 * (raio*raio*raio);
    area = 4 * 3.14 * (raio*raio);

    printf("Valor do volume da esfera: %.2f \n",vol);
    printf("Valor da area da esfera: %.2f \n",area);
}