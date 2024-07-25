#include <stdio.h>
#include <conio.h>


float c, b, g;

void calc_nota()
{
c= (b+g)/2;	
}

main()
{
		
		printf ("digite a nota 1 \n");
		scanf ("%f", &b);
		printf ("digite a nota 2 \n");
		scanf ("%f", &g);

		calc_nota();
		printf (" a nota e %f",c);
		
				if(c<=3)
				{
				        printf ("\n reprovado");
				}
				else if (c>3 && c<=5)
				{
				        printf("\n""recupera��o");
				}
				else if (c>5)
				{
				    printf ("\n""aprovado");
				}
				
		printf("\n" "Pressione qualquer tecla para sair.");
		getch();
}

