#include<stdio.h>
#include<stdlib.h>




//! Dynamic Memory Allocation ... is a way in which the size of a datastructure can be changed during the runtime


// Memory assigned to a Program ... 
// 1. Code
// 2. Static / global variables 
// 3. Stack 
// 4. Heap 
// int main() {
//     int x = 10;          // stack
//     int *p = malloc(sizeof(int)); // heap
// }


// In Dynamic Memory  allocatioin , the Memory is allocated at runtime from the //!heap segment 

// We have four functions that help us achieve this task ... 

// malloc 
// calloc 
// realloc 
// free 

// malloc	               vs       calloc
// Takes 1 argument: total bytes	Takes 2 arguments: number of elements, size of each
// Does not initialize memory	    Initializes memory to 0



int main()
{



    // //Use of malloc 
    int n ;
    printf("Enter the size of Array you want to create using malloc");
    scanf("%d" , &n);
    int *ptr ;
    ptr = (int*)malloc(n*sizeof(int)); // Dynamic array of size n ;
    
   
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d  of this array \n",i);
        scanf("%d" , &ptr[i]);
    }

    stores garbage value by default 
    for (int i = 0; i < n; i++)
    {
       
        printf("%d " , ptr[i]);
    }






    //Use of callloc 
    int n ;
    printf("Enter the size of Array you want to create using calloc");
    scanf("%d" , &n);
    int *ptr ;
    // in calloc comma comes in between ;
    ptr = (int*)calloc(n , sizeof(int)); // Dynamic array of size n ;
    
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d  of this array \n",i);
        scanf("%d" , &ptr[i]);
    }
    
    // stores 0 by default 
    for (int i = 0; i < n; i++)
    {
        printf("%d " , ptr[i]);
    }
    
    
    
    // Use of realloc - it will create a new array   
    
    
    printf("Enter the size of  new Array you want to create using realloc ");
    scanf("%d" , &n);
        // in calloc comma comes in between ;
        ptr = (int*)realloc(ptr ,  n*sizeof(int)); // Dynamic array of size n ;
        
       

        for (int i = 0; i < n; i++)
        {
            printf("Enter the  new value of %d  of this array \n",i);
            scanf("%d" , &ptr[i]);
        }

    
        // stores 0 by default 
        for (int i = 0; i < n; i++)
        {
           
            printf("%d " , ptr[i]);
        }

    
        // Memory empty now 
        // After free(ptr);, the memory is returned to the heap and should not be used again.
        free(ptr);  

    
    return 0;
}




//! Memory Leak vs Dangling Pointer

// Memory Leak:
// You lose the address of allocated memory before freeing it.

// int *p = malloc(sizeof(int));
// p = NULL;   // old address lost

// Now you cannot free that memory anymore → memory leak.

// Dangling Pointer:
// A pointer still points to memory that has already been freed.

// int *p = malloc(sizeof(int));
// free(p);

// Now p is a dangling pointer because it still stores an invalid address.

// Fix:

// free(p);
// p = NULL;