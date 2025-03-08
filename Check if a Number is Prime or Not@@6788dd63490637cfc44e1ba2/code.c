#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<a/2;i++){
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