//To Calculate factorial using for loop;
#include<stdio.h>
int main()
{
    int a,b=1,i;
    printf("Enter a number to find factorial:\t");
    scanf("%d",&a);
    for(i=1;i<=a;++i){
        b=b*i;
    }
    printf("%d",b);
    return 0;
}