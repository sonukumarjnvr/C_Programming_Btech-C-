#include<stdio.h>

int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);

    if(x >= 0){
        printf("your number is positive");
    }
    else{
        printf("your number is negative");
    }

    return 0;
}