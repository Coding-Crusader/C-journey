//Sum of products in a Multiplication table 
#include<stdio.h>
int main()
{
    int a,i=1,b,c=0;
    printf("Which multiplacation table you want:\t");
    scanf("%d",&a);
    for(a;i<11;i++){
        b=a*i;
        c=c+b;
    }
    printf("%d",c);
    return 0;
}