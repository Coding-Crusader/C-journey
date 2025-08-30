//Practice Code 007
//Q-Code to check whether a number is divisible by 97 or not
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number you want to check");
    scanf("%d", &a);
    if(a%97==0){
        printf("It is divisible");
    }
    else{
        printf("Bhaag yaha se");
    }
    return 0;
}