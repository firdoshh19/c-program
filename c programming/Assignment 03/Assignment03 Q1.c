#include<stdio.h>
int main()
{
    // Variable Declaring
    int a;
    // Take Input
    printf("enter  year");
    scanf("%d",&a);

    // Logic Applied
    if(a%4==0){

       if(a%100==0){

            if(a%400==0){
                printf(" %d is a Leap year");
            }
            else{
               printf(" %d is Not a leap year");
            }
        }
        else{
            printf(" %d is a leap year");
        }

    }
    else{
    printf(" %d is Not a leap year");
    }



}
