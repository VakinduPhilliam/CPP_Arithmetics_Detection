// C program to find the prime numbers between a given interval 
// A prime number is one that can only be divided by 1 and itself
  
#include <stdio.h> 
  
int main() 
{ 
    // Declare the variables 

    int a, b, i, j, flag; 
  
    // Ask user to enter lower value of interval 

    printf("Enter lower bound of the interval: "); 

    // Take input 

    scanf("%d", &a);
  
    // Ask user to enter upper value of interval 

    printf("\nEnter upper bound of the interval: "); 

    // Take input 

    scanf("%d", &b); 
  
    // Print display message 

    printf("\nPrime numbers between %d and %d are: ", a, b); 
  
    // Traverse each number in the interval 
    // with the help of for loop 

    for (i = a; i <= b; i++) { 

        // Skip 1 as 1 is neither 
        // prime nor composite 

        if (i == 1) 
            continue; 
  
        // flag variable to tell 
        // if i is prime or not 

        flag = 1; 
  
        for (j = 2; j <= i / 2; ++j) { 

            if (i % j == 0) { 
                flag = 0; 
                break; 
            } 
        } 
  
        // flag = 1 means i is prime 
        // and flag = 0 means i is not prime 

        if (flag == 1) 
            printf("%d ", i); 
    } 
  
    return 0; 
}
