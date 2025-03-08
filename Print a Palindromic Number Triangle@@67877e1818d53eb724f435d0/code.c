#include<stdio.h>
void main(){
    int a,i,j,s,b=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(s=1;s<=a-i;s++){
            printf(" ");
        }
        for(j=1; j<=2*i-1;j++){
            printf("%d",b);
            
        }
        b=b*11;
        printf("\n");
    }
}