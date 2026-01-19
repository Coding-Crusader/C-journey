//Print sum of first 10 numbers using while loop
#include<stdio.h>
int main()
{
    int a,b=0,i=1;
    printf("Till which integer you want to print:\t");
    scanf("%d",&a);
    while(i<=a){
        b=b+i;
        ++i;
    }
    printf("%d",b);
    return 0;
}