// c27 in do-while
#include<stdio.h>
int main()
{
    int a,b=1,i=2;
    printf("Enter a number to check if it is prime or not:\t");
    scanf("%d",&a);
    if(a<=i){
        b=0;
    }
    else{
        do{
            if(a%i==0){
                b=0;
                break;
            }i++;
        }while(a>i);
    }
    if(b){
        printf("Number is prime");
    }
    else{
        printf("number is not prime");
    }
    return 0;
}