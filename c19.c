//Print multiplication table
#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Which multiplacation table you want:\t");
    scanf("%d",&a);
    for(a;i<11;i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }
    return 0;
}