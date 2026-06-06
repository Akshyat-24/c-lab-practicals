#include<stdio.h>

int factorial( int n){
    if(n < 1){
        return 1;

    }
    else{
       return  factorial(n-1)*n;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d" , &n);
    int x = factorial(n);
    printf("%d" , x);
    return 0;
}
