#include<stdio.h>

// Call by value → copy changes
// Call by reference → original changes


// call by value 
void square( int n);

// call by reference 
void _square(int* n) ;

int main(int argc, char const *argv[])
{
    int num = 4;
    square(num); //16
    printf(" number = %d\n" , num); // 4
    
    _square( &num);//16
    printf(" number = %d\n" , num); // 16




    return 0;
}


void square(int n){
    n = n*n;
    printf(" number = %d\n" , n);
}

void _square(int* n){
    *n = (*n) * (*n);
    printf(" number = %d\n" , *n);
}


// Same question can come if we swap two no. inside the main function the value will not be change if 
// call by value , but inside the function itsef the value will be swapppe , but if we do call by refrence both side the value will be changed inside main function and inside function also . 