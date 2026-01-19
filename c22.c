//sum of n natural numbers with for loop
#include<stdio.h>
int main()
{
    int a,b=0,i;
    printf("Till which integer you want to print:\t");
    scanf("%d",&a);
    for (i=1;i<=a;++i){
        b=b+i;
    }
    printf("%d",b);
    return 0;
}