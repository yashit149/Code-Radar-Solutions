#include<stdio.h>
void main(){
    int a,i,j,s;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(s=1;s<=a-i;s++){
            printf(" ");
        }
        for(j=1; j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}