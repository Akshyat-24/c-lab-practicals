#include<stdio.h>

int main()
{
    
    int n ;
    scanf("%d" , &n);

    // Perfect nO. 
// int sum =0;
//  for (int i = 1; i < n; i++) {
//         if (n % i == 0) {
//             sum += i;
//         }
//     }

//     if (sum == n && n != 0)
//         printf("%d is a Perfect Number.\n", n);
//     else
//         printf("%d is not a Perfect Number.\n", n);





// Fibonacci Series

// int a = 0 ;
// int b = 1;
// for (int i = 0; i < n; i++)
// {
//     printf("%d " , a);
//    int c  = a+b;
//     a = b;
//     b = c;
// }















    // Factorial of a Number'
    // int fact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //    fact *= i;
    // }
    // printf("%d" , fact);










// Largest Digit in a Number

    // int largest = 0;
    // int lastdigit = 0;
    // while (n > 0)
    // {
    //     lastdigit = n%10;
    //     if (lastdigit>largest)
    //     {
    //         largest= lastdigit;
    //     }
        
    //     n = n/10;
    // }
    // printf("%d" , largest);











//For 3 digit no. Armstrong no. 
// int  originalNum, remainder, result = 0;


//     originalNum = n;

//     while (originalNum != 0) {
//         remainder = originalNum % 10;
        
//         result += remainder * remainder * remainder;
        
//         originalNum /= 10;
//     }

//     if (result == n)
//         printf("%d is an Armstrong number.\n", n);
//     else{
//         printf("%d is not an Armstrong number.\n", n);
//     }










    // Count Digits
    // int lastdigit = 0;
    // int count = 0;
    // while (n > 0)
    // {
    //     lastdigit = n%10;
    //     n = n/10;
    //     count += 1;
    // }
    // printf("%d" , count);

















// Palindrome Number
    // int lastdigit = 0;
    // int rev = 0;
    // int original = n ;
    // while (n > 0)
    // {
    //     lastdigit = n%10;
    //     rev = ( rev*10)+ lastdigit;
    //     n = n/10;
    // }

    // if (original == rev)
    // {
    //     printf("Palindrome");
    // }
    // else{
    //     printf("No");
    // }













// `Reverse a Number


// int lastdigit = 0;
// int rev = 0;
// while (n > 0)
// {
//     lastdigit = n%10;
//     rev = ( rev*10)+ lastdigit;
//     n = n/10;
// }
// printf("%d" , rev);











    // Sum of Digits
    // int lastdigit = 0;
    // int sum = 0;
    // while (n > 0)
    // {
    //     lastdigit = n%10;
    //     sum += lastdigit;
    //     n = n/10;
    // }
    // printf("%d" , sum);




















    // Prime Number Check
    
//     int flag = 0;
//     for (int i = 2; i < n; i++)
//     {
//         if(n%i == 0 ){
//             flag += 1;
//         }
//     }



//     if (n>0)
//     {
//         /* code */
    
    
//     if (flag == 0)
//     {
        
//         printf("Prime No.");
    
    
    
// }
//     else{
//         printf("Not a Prime NO.");
//     }
    

// }
// else{
//     printf("Not a Prime NO.");
// }

return 0;
}