#include<stdio.h>
void main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1; j<=a;j++){
            printf("* ");
        }
        printf("\n");
    }
}