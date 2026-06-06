#include<stdio.h>



int fact( int n){
    if (n == 1 || n == 0 ) return 1;
    
    else {

        return n*fact(n-1);
    }
}

int fib( int n){
    if (n == 1 || n == 0 ) return 1;
    
    else {
 
        return fib(n-1)+ fib(n-2);
    }
}


int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}


int main(int argc, char const *argv[])
{
    
    // int n;
    // scanf("%d" , &n);
   // // printf("%d" , fact(n));     
    // printf("%d" , fib(n));

    int a , b;
    scanf("%d %d" , &a , &b);
    printf("%d" , gcd(a,b));
    return 0;
