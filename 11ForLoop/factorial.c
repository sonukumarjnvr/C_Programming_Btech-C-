#include<stdio.h>

int main(){
    int N;
    printf("enter number to print Natual number : ");
    scanf("%d", &N);

    int product = 1;
    for(int i=1; i<=N; i++){
        product *= i;
    }

    printf("product : %d\n", product);


    return 0;
}