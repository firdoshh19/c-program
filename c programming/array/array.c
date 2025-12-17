// 1. Take an array of size 5 , scan and print using an array subscript variable.//


  #include<stdio.h>
    int main (){
    int a[5],i;

    // scanning a array elemets
    printf("enter 5 element:\n");
    for(i=0;i<5;i=i+1){
    scanf("%d",&a[i]);
    }

    // printing a array elements
    printf("array elements are:\n");
    for(i=0;i<5;i=i+1){
    printf("%d\n",&a[i]);

    }


}
