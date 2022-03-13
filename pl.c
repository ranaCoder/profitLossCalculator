#include<stdio.h>
#include<stdlib.h>
int main()
{
    float cp,sp,amt,per; //declaring variables
         // taking input from user

    printf("It is  a profit and loss calculation program\n");
    printf("Enter cost price: \n");
    scanf("%f",&cp);
    printf("Enter selling price: \n");
    scanf("%f",&sp);
   //condional statement
    if(cp<sp){
        amt =sp-cp;
        per = amt/cp*100;
        printf("You are in profit\n");
        printf("You earned %.2f more\n",amt);
        printf("profit percentage : %.2f",per);
        
    }
    else{
        amt= cp - sp;
        per = amt/cp *100;
        printf("You are in loss\n");
        printf("You have lost %.2f.\n",amt);
        printf("loss percentage : %.2f",per);
    }

    return 0;

}