//Program to print first n natural number using for loop
#include<stdio.h>
int main()
{
    int a,b;
    printf("Till which number you want to print:\t");
    scanf("%d",&a);
    for (b=0;b<a;++b){
        printf("%d\t",b+1);
    }
    return 0;
}