// Practice code 002
// Q-Calculate the area od circle, modify the code to calculate the volume of the cylinder
#include<stdio.h>
int main()
{
    int radius, height;
    float pi, ar;
    radius=5;
    height=10;
    pi=3.14;
    ar=pi*radius*radius;
    printf("The area of the Circle is %f\n",ar,"\n");
    printf("The area of cylinder is %f\n",ar*height);
    return 0;
}