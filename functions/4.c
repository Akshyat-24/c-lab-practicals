#include<stdio.h>

void visits(int n){
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
    }
}

int main(){
    int n;

    printf("Number OF Visits : ");
    scanf("%d", &n);

    visits(n);

    return 0;
}