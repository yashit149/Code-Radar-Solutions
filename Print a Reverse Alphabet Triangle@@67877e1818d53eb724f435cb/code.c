#include<stdio.h>
void main(){
    int a,i,j,s;
    scanf("%d",&a);
    for(i=a;i>=1;i--){
        for(j=1; j<=i;j++){
            printf("%c ",64+j);
         
        }
        printf("\n");
    }
}