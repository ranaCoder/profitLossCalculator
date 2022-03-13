#include<stdio.h>
#include<stdlib.h>
int main()
{
    float cp,sp,amt; //declaring variables
         // taking input from user

    printf("It is  a profit and loss calculation program\n");
    printf("Enter cost price: \n");
    scanf("%f",&cp);
    printf("Enter selling price: \n");
    scanf("%f",&sp);
   //condional statement
    if(cp<sp){
        amt =sp-cp;
        printf("You are in profit\n");
        printf("You earned %.0f more",amt);
        
    }
    else{
        amt= cp - sp;
        printf("You are in loss\n");
        printf("You have lost %.0f",amt);
    }

    return 0;

}