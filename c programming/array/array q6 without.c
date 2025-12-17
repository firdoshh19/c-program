//3. Add two array without pointer //
int main(){
    int a[3],b[3],c[3],i;

    printf("enterr the number:\n");
    for(i=0;i<3;i=i+1){
        scanf("%d",&a[i]);
    }
    printf("enter five more numbers\n");
    for(i=0;i<3;i=i+1){
        scanf("%d",&b[i]);
    }
    printf("the sum are\n");
    for(i=0;i<3;i=i+1){
        c[i]=a[i]+b[i];
        printf("%d\n",c[i]);
    }

}
