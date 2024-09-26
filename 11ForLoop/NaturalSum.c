#include<stdio.h>

int main(){
    int N;
    printf("enter number to print sum of natural number : ");
    scanf("%d", &N);
    int sum = 0;
    for(int i=1; i<=N; i++){
       sum = sum + i;
    }
    
    printf("sum = %d ", sum);
    return 0;
}