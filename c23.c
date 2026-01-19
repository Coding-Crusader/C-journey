//sum of n natural numbers using do-while
#include<stdio.h>
int main()
{
    int a,b=0,i=1;
    printf("Till which integer you want to print:\t");
    scanf("%d",&a);
    do{
        b=b+i;++i;
    }while(i<=a);
    printf("%d",b);
    return 0;
}