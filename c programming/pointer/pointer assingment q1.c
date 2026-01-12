   /* 1.Declare an integer variable and a pointer to it.print the value using both the varaiable and the pointer */

     #include<stdio.h>
     int main(){
         int a;
         a=5;

         int*p;
         p=&a;

         printf("value using variable :%d\n",a);

         printf("value using pointer:%d\n",p);

     }


