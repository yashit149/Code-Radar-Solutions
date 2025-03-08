#include<stdio.h>
void main(){
    int a,i,j;s;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(s=2;s<a;s++)
        for(j=1; j<=a;j++){
           printf("*");
        }
        printf("\n");
    }
}