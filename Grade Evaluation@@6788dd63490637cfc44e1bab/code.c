#include<stdio.h>
void main(){
    char a;
    scanf("%d",&a);
    switch(a){
        case 'A':
        printf("Exellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        break;
        case 'F':
        printf("Fail");
        break;
        default:
        printf("Invalid grade");
    }
}