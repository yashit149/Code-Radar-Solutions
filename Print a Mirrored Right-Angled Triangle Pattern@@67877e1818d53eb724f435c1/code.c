#include<stdio.h>
void main(){
    int a,i,j,s;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=0; j<=i-1;j++){
            printf("*");
        }
        for(s=0;s<=a-i;s++){
            printf(" ");
        }
        
        printf("\n");
    }
}