#include<stdio.h>
void main(){
    char a;
    scanf("%d",&a);
    if(a=='A'){
        printf("Exellent");
    }
    else if(a=='B'){
        printf("Good");
    }
    else if(a=='C'){
        printf("Average");
    }
    else if(a=='D'){
        printf("Below Average");
    }
    else if(a=='F'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }

}