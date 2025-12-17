#include<stdio.h>
int main (){
    int n,r,t,u;
    r=0;

    printf("enter a number:");
    scanf("%d",&n);
    u=n;
    while(n!=0){
            t=n%10;
            r=r*10+t;
            n=n/10;
            }
            printf("%d",r);
            if(u==r){
                    printf("same numberrr");

            }
            else{
                printf("number are not same");
            }



}

