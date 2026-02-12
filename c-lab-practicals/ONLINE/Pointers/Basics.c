#include<stdio.h>


int main(int argc, char const *argv[])
{
    //? Pointers 

    // A variable that stores the memory address of another variable 

    //Syntax
    int age = 22;
    // * -> Value at address operator 
    // & -> address of operator 
    int*ptr = &age;

    // To see the value of the address 
    int _age = *ptr;  //-> Pointer Pe jo address store hai uski value 
    printf("%d", _age);


    // want to store address of any other data type we can use 
    // char*ptr;
    // float*ptr;

    // Format Specifier 
    printf("%p" , &age);  // -> To get address of a variable 
    printf("\n %u" , &age);  // -> To get better readability use unsigned int Same with ptr 
    printf("\n %u" , ptr);  // -> To get address of a variable Through pointer  
    printf("\n %p" , &ptr);  // -> To get address of the  pointer  


    // To print the value of the address stored in pointer 
    // Output - 22 
    printf( "\n %d" , age);
    printf( "\n %d" , *ptr);
    printf( "\n %d" , *(&age));
    return 0; 
}
