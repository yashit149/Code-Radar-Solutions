#include<stdio.h>
void main(){
    int a,i,j,s;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1; j<=a;j++){
          if(i==1 || j==1 || i==a || j==a){
            printf("*");
            }
          else{
            printf(" ");
          }
        }
        printf("\n");
    }
}