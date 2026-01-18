//Print a table in reverse order
#include<stdio.h>
int main()
{
    int a,i=10;
    printf("Which multiplacation table you want:\t");
    scanf("%d",&a);
    for(a;i;i--){
        printf("%d x %d = %d\n",a,i,a*i);
    }
    return 0;
}