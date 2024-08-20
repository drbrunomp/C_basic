#include<stdio.h>
#include<math.h>

float raio,
      vol,
      area;

main()
{
    printf("Entre com o valor do RAIO: \n");
    scanf("%f",&raio);

    vol = 1.33333 * 3.14 * pow(raio,3);
    area = 4 * 3.14 * pow(raio,2);

    printf("Valor do volume da esfera: %.2f \n",vol);
    printf("Valor da area da esfera: %.2f \n",area);
}