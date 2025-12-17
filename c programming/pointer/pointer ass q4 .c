 /*4.Take an integer variable and a pointer pointing to it. Now increment the value of variable using pointer. Print the value of integer before and after update.*/
 #include<stdio.h>
 int main(){
     int a;
     a=9;
     int*p;
     p=&a;
     printf("%d\n",a);
     printf("%d\n",p);
     p=p+1;
     printf("%d",p);







 }

