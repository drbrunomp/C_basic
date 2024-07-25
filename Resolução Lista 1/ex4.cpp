#include<stdio.h>

float comb_g,
      comb_et,
      dist,
      gas = 14,
      et = 9;

main()
{
    printf("Entre com a distancia a ser percorrida: \n");
    scanf("%f",&dist);

    comb_g = dist / gas;
    comb_et = dist / et;

    printf("Abastecer com Gasolina (L): %.2f \n",comb_g);
    printf("Abastecer com Etanol (L): %.2f \n",comb_et);
}