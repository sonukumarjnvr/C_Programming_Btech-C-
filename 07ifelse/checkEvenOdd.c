#include<stdio.h>

int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    

    if(x % 2 == 0){
        printf("your number is even");
    }
    else{
        printf("your number is odd");
    }
    return 0;
}