//025 by using while loop
#include<stdio.h>
int main()
{
    int a,b=1,i=1;
    printf("Enter the number to find factorial:\t");
    scanf("%d",&a);
    while(i<=a){
        b=b*i;
        ++i;
    }
    printf("%d",b);
    return 0;
}