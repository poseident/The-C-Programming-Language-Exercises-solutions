#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; // lower limit of temperatuire scale
    upper = 300; // upper limit
    step = 20; // step size 

    printf("Fahrenheit: equivalent Celsius:\n");
    printf("-------------------------------\n");

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("\t\t%3.0f\t\t\t\t %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}