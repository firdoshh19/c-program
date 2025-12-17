\
#include <stdio.h>
int main(){
            int m;
            int p;
            int c;
            int totalmarks ,tmp;

            printf("Enter your Maths marks:");
            scanf("%d",&m);

            printf("Enter your Physics marks:");
            scanf("%d",&p);

            printf("Enter your Chemistry marks:");
            scanf("%d",&c);

            totalmarks=m+p+c;

            tmp=m+p;

            printf("Total marks of math, physics,chemistry is : %d \n" ,totalmarks);

            printf("  Total Marks of Math and physics is: %d \n " ,tmp );

            if(totalmarks>=190 || tmp>=140){

                    printf("The candidate is eligible. ");


            }
            else{
                printf("The candidate is not eligible.");
            }

}
