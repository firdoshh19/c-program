//2. Take an array of size 5 , scan and print using a pointer.//
#include<stdio.h>
int main(){
    int a[5];
    int i;
    int *q;
    q=a;

    printf(" enter five elements:\n");
    for(i=0;i<5;i=i+1){
    scanf("%d", (q+i));
    }

    printf("the elements are:\n");
    for(i=0;i<5;i=i+1){
    printf("%d\n",*(q+i));
    }







}
