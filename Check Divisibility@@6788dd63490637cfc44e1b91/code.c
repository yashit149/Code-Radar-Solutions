#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
}