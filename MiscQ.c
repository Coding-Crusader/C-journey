// MiscQ
//to print answer of division
#include<stdio.h>
int main()
{
    float k, d, D;
    printf("Enter Divident\n");
    scanf("%f", &D);
    printf("Enter divisor\n");
    scanf("%f", &d);
    k=D/d;
    printf("Your divident %f, \nYour Divisor %f, \nYour answer %f", D, d, k);
    return 0;
}


//MiscQ
//To Check order of operations
#include<stdio.h>
int main()
{
    int a;
    a=4+4-4*2;
    printf("%d", a);
    return 0;
}