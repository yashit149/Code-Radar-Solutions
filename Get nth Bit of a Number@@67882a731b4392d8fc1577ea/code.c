#include<stdio.h>
void main(){
    int i,a,x;
    scanf("%d %d",&i,&a);
    x=a<<i-1;
    if(x%2==0){
        printf("0");
    }
    else{
        printf("1");
    }


}