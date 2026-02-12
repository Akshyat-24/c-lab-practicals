#include<stdio.h>

void hello();

int sum(int a , int b);
int main(int argc, char const *argv[])
{
    hello();
    hello();
    hello();
    int s = sum(2,2);
    printf("\n %d",s);
    return 0;
}

int sum( int a , int b){
    return a+b;

}

void hello(){
    printf(" \n hello World !");
}