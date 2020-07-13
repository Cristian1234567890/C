#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	
	//bloque declarativo
	int a[1000], b[100], c[1000];
	int i=0, s=0, t=1, r=0, j; 
	
	//bloque de instrucciones	
	//obtener valores de vector A
	for(i=1; r!=1; i=i+1)
	{
		printf("\nIngrese un valor para el vector A: ");
		scanf("%d", &a[i]);
		
		printf("\nIngrese 1 si no desea ingresar mas numeros al vector a: ");
		scanf("%d", &r);
		if(r==1)
		{
			printf("\nEl vector A tiene %d numeros", i);
			i=i-1;
		}
		else 
		{
			r=0;
		}
	}
	
	//obtener valores de vector B
	for(s=1; r!=0; s=s+1)
	{
		printf("\nIngrese un valor para el vector B: ");
		scanf("%d", &b[s]);
		
		printf("\nIngrese 0 si no desea ingresar mas numeros al vector b: ");
		scanf("%d", &r);
		if(r==0)
		{
			printf("\nEl vector B tiene %d numeros", s);
			s=s-1;
		}
		else 
		{
			r=1;
		}
	}
	
	//evaluacion basica de concordancia
	while(r==0)
	{
		r=1;
		j=s;
		while(r==1)
		{
			if(a[i] == b[j])
			{
				c[t] = b[j];
				printf("\nEl numero %d esta repetido en ambos verctores.", c[t]);
				t++;
				r=0;
			}
			else
			{
				j=j-1; 
				if(j==0)
				{
					r=0;
				}
			}
		}
		i = i-1;
		if(i==0)
		{
			r=1;
			printf("\nEvaluacion completa");
		}
		else 
		{
			r=0;
		}
	}
}





