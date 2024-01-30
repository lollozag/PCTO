#include <stdio.h>

int main() {
    float temperaturaCELSIUS, temperaturaFAHRENHEIT, temperaturaKELVIN;
    printf("Inserisci una temperatura in gradi Celsius");
    scanf("%f", &temperaturaCELSIUS);
    
    
    if (temperaturaCELSIUS >= -273.15)
    {
       temperaturaFAHRENHEIT = 9/5 * temperaturaCELSIUS + 32; 
       temperaturaKELVIN = temperaturaCELSIUS + 273.15;
       printf("La temperatura che hai inserito in gradi Celsius corrisponde a: %f KELVIN e %f FAHRENHEIT", temperaturaKELVIN, temperaturaFAHRENHEIT);
    }
    else
    {
       printf("La temperatura che hai inserito in gradi Celsius è sotto lo zEro assoluto");
    }

return(0);
}