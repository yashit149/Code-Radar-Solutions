#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    for(i=a;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}