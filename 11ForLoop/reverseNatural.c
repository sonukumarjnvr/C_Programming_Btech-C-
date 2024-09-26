#include<stdio.h>

int main(){
    int N;
    printf("enter number to print Natual number : ");
    scanf("%d", &N);

    for(int i=N; i>=1; i--){
        printf("%d ", i);
    }

    return 0;
}