#include<stdio.h>
void main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);

    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);

    }
    else if(c=='/'){
        if(b=='0'){
            printf("error");
        }
        else{
        printf("%d",a/b);
        }
    }
    else{
        printf("error");
    }
}