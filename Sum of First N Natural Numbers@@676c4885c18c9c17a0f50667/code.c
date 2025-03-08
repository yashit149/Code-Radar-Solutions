#include<stdio.h>
void main(){
    int a,s;
    s=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        s+=i;
        printf("%d ",s);
    }
}