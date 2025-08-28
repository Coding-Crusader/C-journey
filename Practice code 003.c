// Practice code 003
// Q-Program ro convert Celsius to Farenheit
#include<stdio.h>
int main()
{   
    float t, fahr;
    printf("Enter the temperature in Celsius:\t");
    scanf("%f",&t);
    fahr=5*(t-32)/9;
    printf("Temperature in Celsiu is%f",t);
    printf("°C\n");
    printf("Temperature in Fahrenite is %f", fahr);
    printf("F\n");
    return 0;
}