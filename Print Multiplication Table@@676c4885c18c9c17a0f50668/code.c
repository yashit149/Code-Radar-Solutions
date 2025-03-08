#include<stdio.h>
void main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        j=a*i;
        printf("%d x %d = %d\n",a,i,j);
    }
}