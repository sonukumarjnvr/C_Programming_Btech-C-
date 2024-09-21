#include<stdio.h>

int main(){
    int a, b;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);

    if(a > b){
        printf("your largest number is %d", a);
    }
    else if(b > a){
        printf("your largest number is %d", b);
    }
    else{
        printf("both number are equal");
    }
    return 0;
}