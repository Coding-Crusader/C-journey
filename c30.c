//swap 2 variables using a third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number a and b:\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d,%d",a,b);
    return 0;
}