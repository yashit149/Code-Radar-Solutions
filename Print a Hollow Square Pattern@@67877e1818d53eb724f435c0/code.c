#include<stdio.h>
void main(){
    int a,i,j,s;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1; j<=a;j++){
          if(i==0 || j==0 || i==a-1 || j==a-1){
            printf("*");
            }
          else{
            printf(" ");
          }
        }
        printf("\n");
    }
}