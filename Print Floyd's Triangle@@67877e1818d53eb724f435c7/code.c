#include<stdio.h>
void main(){
    int a,i,j,s,b;
    scanf("%d",&a);
    b=1;
    for(i=1;i<=a;i++){
        for(j=1; j<=i;j++){
            printf("%d",b);
            b++;
        }
        printf("\n");
    }
}