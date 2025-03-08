#include<stdio.h>
void main(){
    int a,i,j,s;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1; j<=i-1;j++){
            printf("*");
        }
        for(s=1;s<=a-i;s++){
            printf(" ");
        }
        
        printf("\n");
    }
}