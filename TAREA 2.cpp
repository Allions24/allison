#include <stdio.h>

int main ()
{

float celsius = 18  ;
float fahrenheit = 86 ;
float temperaturaFahrenheit ;
float temperaturaCelsius ;

temperaturaFahrenheit = (9/5.0)*celsius +32 ;
temperaturaCelsius = (fahrenheit - 32.0)*(5.0/9.0) ;
printf ("Mostrar temperaturaFahrenheit: %f\n ", temperaturaFahrenheit);
printf ("Mostrar temperaturaCelsius: %f\n " , temperaturaCelsius);
   
	return 0;
}
