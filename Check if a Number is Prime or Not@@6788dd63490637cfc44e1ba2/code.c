#include<stdio.h>
void main(){
    int a;
    int isPrime = 1;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        if(a%i==0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime) printf("Prime");
    else printf("Not Prime");
}