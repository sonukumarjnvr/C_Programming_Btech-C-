#include<stdio.h>

int main(){
    int N;
    printf("enter number to print Natual number : ");
    scanf("%d", &N);

    for(int i=1; i<=10; i++){
        printf("%d X %d = %d\n", N, i, N*i);
    }

    return 0;
}