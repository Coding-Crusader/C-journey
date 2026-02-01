To find average of 3 numbers using functions
#include<stdio.h>
void avg(){
    float a,b,c;
    printf("Enter 3 numbers A B and C respectively: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Average of %d, %d, and %d is %d",a,b,c,((a+b+c)/3));
}
int main()
{
    avg();
    return 0;
}