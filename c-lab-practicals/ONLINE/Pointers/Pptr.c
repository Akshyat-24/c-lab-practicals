#include<stdio.h>

int main(int argc, char const *argv[])
{
    // ?pptr - Pointer to pointer 
    // pptr is a name it can be changed like a variable 
    // int **pptr;
    // char **pptr;
    // float **pptr;

    // float price = 100.0003;
    // float *ptr = &price;
    // float **pptr = &ptr; // pptr has the address of ptr  

    // //Now we have to print value of price throught pptr 

    // printf("%d /n" , **pptr);


    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n" , **pptr);
    return 0;
}
