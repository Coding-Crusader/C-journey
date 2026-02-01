//TO print area of square using function
#include<stdio.h>
void area(int);
int main()
{
    int a;
    printf("Enter side of square : ");
    scanf("%d",&a);
    area(a);
    return 0;
}
void area(int a){
    printf("Area of the square is %d",a*a);
}