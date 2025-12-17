/*    3.Create a pointer to a float variable and print the size of the pointer and the variable.*/
   #include<stdio.h>
   int main(){
       float a;
       a=5.5;
       float*x;
       x=&a;

       printf("size of variable:%zu bytes\n",sizeof(a));
       printf("size of pointer:%zu bytes\n",sizeof(x));






   }
