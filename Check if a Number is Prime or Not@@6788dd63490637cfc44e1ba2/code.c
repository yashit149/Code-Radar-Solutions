#include<stdio.h>
void main(){
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        if(a%i==0){
            printf("Not Prime");
            break;
        }
        else{
            printf("Prime");
            break;
        }
        
    }
}