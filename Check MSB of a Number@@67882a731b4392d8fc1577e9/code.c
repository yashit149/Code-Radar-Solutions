#include<stdio.h>
void main(){
    int i;
    scanf("%u",&i);
    if( (signed int) i>=0){
        printf("Not Set");

    }
    else {
        printf("Set");

    }
}