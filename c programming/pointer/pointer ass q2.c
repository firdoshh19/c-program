  /* 2.Write a program to input a number and display its memory address using a pointer.*/
   #include<stdio.h>
   int main(){
       int a;

       printf("enter a number:");
       scanf("%d",&a);

       int*p;
       p=&a;


       printf("%d",p);





   }

