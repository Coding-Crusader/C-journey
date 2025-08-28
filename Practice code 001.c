// Practice code 001
// Q-Program to calculate area of rectangle i)hard code inputs ii)inputs provided by user
#include<stdio.h>
int main(){
    int l,b;
    l=5; //first
    b=10;
    printf("Enter the length:\t");  //second
    scanf("%d", &l);
    printf("Enter the breadth:\t");
    scanf("%d", &b);
    printf("Area of the Rectangle is %d", l*b);
    return 0;
}