#include<stdio.h>

int main(int argc, char const *argv[])
{
    //Find ouput 


    int *ptr;
    int x ;
    ptr = &x;// pointer ke andar x ka address daldiya 
    *ptr = 0;// value at address stored in ptr = 0 which is x ; so x =  0

    printf("x= %d\n" , x);
    printf("*ptr = %d\n" , *ptr);
    *ptr += 5; // x = 5


    (*ptr)++; // *ptr = *ptr +1  So x = 6 , *ptr = 6
    return 0;
}
