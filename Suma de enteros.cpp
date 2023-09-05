#include<stdio.h>
#include<math.h>
int main()
{
int a;
int b;
int opcion;
int resultado;

printf("ingresa un numero entero: \n");
scanf("%d",&a);
printf ("ingresa un numero entero: \n");
scanf("%d",&b);
printf ("elija una operacion:\n");
printf ( "1. Suma\n");
printf ("2. resta \n");
scanf ("%d",&opcion);

switch(opcion)
	{
	case 1:
	resultado=a+b;
	printf("%d+%d=%d\n", a,b,resultado);
	break;
	case 2:
	resultado=a-b;
	printf("%d-%d=%d\n", a,b,resultado);
	break;	
	}
return 0;
}
