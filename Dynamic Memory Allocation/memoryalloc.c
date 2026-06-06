#include<stdio.h>


// malloc - Memory allocation 
// it reserves a block of memory with the given amount of bytes 

// all the values at allocated memory are initalized to //!garbage values 





int main()
{
    int *ptr ;
    ptr = (int*)malloc(3*sizeof(int));
    return 0;
}
