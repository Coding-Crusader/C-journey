//Practice code 008
//Print grades A B C D F
//If-else version/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter your marks:\t");
    scanf("%d",&a);
    if (a>=90){
        printf("you have bagged A grade");
    }
    else if (a>=80){
        printf("you have bagged B grade");
    }
    else if (a>=70){
        printf("you have bagged C grade");
    }
    else{
        printf("fucker got a F XD");
    }

    return 0;
}