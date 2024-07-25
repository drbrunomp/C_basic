#include<stdio.h>
#include<conio.h>

float diam, lad, aq, ac;

void calc_circ()
{
	ac= (3.14*(diam*diam))/4;
}

void calc_quad()
{
	aq= lad*lad;
}

main()
{
	while(1)
	{
		printf("\n CALCULO AREA DE FIGURAS GEOMETRICAS \n");
		printf("entre com o valor do diametro da circunferencia \n");
		scanf("%f", &diam);
		printf("entre com o valor do lado do quadrado \n");
		scanf("%f", &lad);
		
		calc_circ();
		calc_quad();
		
		printf("area da circunferencia: %f \n", ac);
		printf("area do quadrado:  %f \n", aq);
		
		if(ac<aq)
		{
			printf("circunferencia < quadrado \n");
		}
		else if (ac>aq)
		{
			printf("circunferencia > quadrado \n");	
		}
		else
		{
			printf("circunferencia = quadrado \n");
		}
	}
}
