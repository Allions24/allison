#include <stdio.h>

int main() 
{
int suma = 0;
int n = 100; 

for (int i=1;i<=n;i++) 
	{
    suma += i * i; 
    }

printf("suma del cuadrados de los primeros %d numeros: %d\n",n, suma);

return 0;
}
