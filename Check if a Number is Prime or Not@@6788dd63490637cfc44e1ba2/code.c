#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
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