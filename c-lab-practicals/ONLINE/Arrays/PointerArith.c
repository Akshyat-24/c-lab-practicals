#include<stdio.h>



int main()
{
    int arr[] = {1,2,3,4};
    int *p = arr;

    printf(" \n%d" , arr[1]);
    printf(" \n%d" , *(p+1));

    // to find distance between elements 
    int *pt1 = &arr[3];
    int *pt2 = &arr[1];
    // C does not return bytes difference it returns no. of elements between pointers 
    printf("\n%u" , pt1-pt2);
    // diff comes in datatypes not bytes like 4 bytes for int - 1 difference 
    //and datatype should be same ;
    // Comparison also can happen and result will come in the form of true (1) and false(0) 
    // pt2 = &arr[3];
    printf("\n%d" , pt1 == pt2);
    return 0;
}



// Explanation of distance 
// Assume address of arr[0] = 1000

// Since int = 4 bytes:

// arr[0] → 1000
// arr[1] → 1004
// arr[2] → 1008
// arr[3] → 1012


// So:

// pt1 = 1012
// pt2 = 1004


// Now you might think:

// 1012 - 1004 = 8


// ❌ WRONG (very important concept)

// C does not return bytes difference.

// It returns:

// number of elements between pointers

// So:

// (1012 - 1004) / sizeof(int)
// = 8 / 4
// = 2


// Output:

// 2