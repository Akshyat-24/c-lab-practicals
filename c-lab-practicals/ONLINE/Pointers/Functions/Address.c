#include<stdio.h>
void printAdd(int n );
int main(int argc, char const *argv[])
{
    int n = 4;
    printf("%p\n" , &n);
    printAdd(n);
    return 0;
}
//  This is call by refrence so it will make a copy of n so address will also be diff 
void printAdd(int n){
    printf("%p\n" , &n);
}