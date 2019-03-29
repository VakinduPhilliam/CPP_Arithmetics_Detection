
// C++ program to check Proth number   
// This program checks whether a number is a Proth number or not
// In mathematics, a Proth number is a positive integer of the form n = k * 2^n + 1;
// Where k is an odd positive integer and n is a positive integer such that 2^n > k .
// The program utilizes the Studio.h Library
// Compiled and presented by Vakindu Philliam

#include <bits/stdc++.h> 
using namespace std; 
  
// Utility function to check power of two 

bool isPowerOfTwo(int n) 
{ 

    return (n && !(n & (n - 1))); 

} 
  
// Function to check if the 
// Given number is Proth number or not 

bool isProthNumber(int n) 
{ 
  
    int k = 1; 

    while (k < (n / k)) { 
  
        // check if k divides n or not 

        if (n % k == 0) { 
  
            // Check if n/k is power of 2 or not 

            if (isPowerOfTwo(n / k)) 

                return true; 

        } 
  
        // update k to next odd number 

        k = k + 2; 
    } 
  
    // If we reach here means 
    // there exists no value of K 
    // Such that k is odd number 
    // and n/k is a power of 2 greater than k 

    return false; 
} 
  
// Driver code 

int main() 
{ 
  
    // Get n 

    int n = 25; 
  
    // Check n for Proth Number 

    if (isProthNumber(n - 1)) 

        cout << "YES"; 

    else

        cout << "NO"; 
  
    return 0; 

}
