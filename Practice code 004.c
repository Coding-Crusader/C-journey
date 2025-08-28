// Practice code 004
// code to calculate simple interest
#include<stdio.h>
int main()
{
    float R, P, T;
    printf("Enter the rate of interest:\t");
    scanf("%f", &R);
    printf("Enter the Principal amount:\t");
    scanf("%f", &P);   
    printf("Enter the time period of the loan in years:\t");
    scanf("%f", &T);
    printf("Your Simple interest is:\n%f",(P*R*T)/100);
    return 0;
}