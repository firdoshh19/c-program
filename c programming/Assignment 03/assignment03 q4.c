#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter the number a: ");
  scanf("%d",&a);

  printf("Enter the number b: ");
  scanf("%d",&b);

  printf("Enter the number c: ");
  scanf("%d",&c);
  if(a==b&&b==c){
    printf("all are equal");
  }
  else if(a>b){
    printf("a is largest number ");
  }

  else if(b>c){
    printf("b is  largest mnumber");
  }
  else {
    printf("c is largest");
  }

}
