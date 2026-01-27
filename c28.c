//027 using while
#include<stdio.h>
int main()
{
    int a,b=1,i=2;
    printf("Enter a number to check if it is prime or not:\t");
    scanf("%d",&a);
    if (a<=1){
        b=0;
    }
    else{
        while(a>i){
            if(a%i==0){
                b=0;
                break;
            }i++;
        }
    }
    if(b){
        printf("number is prime");
    }
    else{
        printf("number is not prime");
    }
    return 0;
}