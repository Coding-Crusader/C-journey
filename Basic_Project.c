#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{


    srand(time(0));
    int dif,random,a,b=1,c;                                         //selecting difficulty
    printf("What difficulty do you want to play in UwU :\n"
        "1. Easy (10%% winning)\n"
        "2. Medium (1%% winning)\n"
        "3. Hard >:) (0.1%% winning)\n");
    scanf("%d",&dif);
    if(dif==1){
        random=rand()%10+1;
    }else if(dif==2){
        random=rand()%100+1;
    }else if(dif==3){
        random=rand()%1000+1;
    }else{
        printf("dhang ka option daal le bhakh lund >:(");
    }


    printf("Lets see how much of a gambler you are >:)\n\nPS:-ENTER '0' TO QUIT\n");
    printf("Guess a number big dawg:-\n");
        do{
        printf("guess\n");
        scanf("%d",&c);
        if(c>random){
            printf("guess lower\n");                                //do-while loop for
        }else if(c<random){
            printf("guess higher\n");
        }
        if(random!=c){
            printf("XXX  WRONG  XXX\n");
        }
        b++;
        if (c==0){
            printf("\n\nthe number was %d",random);
            return 0;
        }
    }while(c!=random);

    printf("\n\n\n--------------------============CONGRATULATIONS============--------------------\n\n\nYOU TOOK\t%d\tATTEMPTS",b);
    return 0;
}    
