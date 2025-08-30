//Switch-default version
#include<stdio.h>
int main()
{
    int a;
    printf("Enter your marks:\t"); 
    scanf("%d",&a);
    switch (a/10){
        case 10:
        case 9:
            printf("A grade");
            break;
        case 8:
            printf("B grade");
            break;
        case 7:
            printf("C grade");
            break;
        default:
            printf("F grade");
            break;
    }
        return 0;
}
