#include<stdio.h>

int swap(int n1 , int  n2){
   int temp = n1;
   n1 = n2;
   n2 = temp;
}
    
int swap2( int *n1 , int *n2){
   int temp = *n1;
   *n1 = *n2;
   *n2 = temp;

    
}

int main(){
    int n1 = 1000;
    int n2 = 2000;
   


    swap(n1 , n2);
    printf(" Call by value : %d %d\n" , n1, n2);
    swap2(&n1 , &n2);
    printf(" Call by reference : %d %d" , n1 ,n2);

    return 0;
}