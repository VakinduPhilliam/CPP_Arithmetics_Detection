// C++ program to check if a number is Trojan Number or not 
//A Trojan Number is a one that is a strong number (see strong number script) but not a perfect number.
  
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to check if a number 
// can be expressed as x^y 

bool isPerfectPower(int n) 
{ 
    if (n == 1) 

        return true; 
  
    // Try all numbers from 2 to sqrt(n) as base 

    for (int x = 2; x <= sqrt(n); x++) { 

        int y = 2; 
        int p = pow(x, y); 
  
        // Keep increasing y while power 'p' 
        // is smaller than n. 

        while (p <= n && p > 0) { 

            if (p == n) 

                return true; 

            y++; 
            p = pow(x, y); 

        } 
    } 

    return false; 

} 
  
// Function to check if a number is Strong 

bool isStrongNumber(int n) 
{ 
    unordered_map<int, int> count; 

    while (n % 2 == 0) { 

        n = n / 2; 
        count[2]++; 

    } 
  
    // count the number for each prime factor 

    for (int i = 3; i <= sqrt(n); i += 2) { 

        while (n % i == 0) { 

            n = n / i; 
            count[i]++; 

        } 
    } 
  
    if (n > 2) 

        count[n]++; 
  
    int flag = 0; 
  
    for (auto b : count) { 
  
        // minimum number of prime divisors 
        // should be 2 

        if (b.second == 1) { 

            flag = 1; 
            break; 
        } 
    } 
  
    if (flag == 1) 

        return false; 
    else

        return true; 

} 
  
// Function to check if a number 
// is Trojan Number 

bool isTrojan(int n) 
{ 
    if (!isPerfectPower(n) && isStrongNumber(n)) 

        return true; 
    else

        return false; 
} 
  
// Driver Code 

int main() 
{ 
    int n = 108; 
  
    if (isTrojan(n)) 

        cout << "YES"; 
    else

        cout << "NO"; 
  
    return 0; 
}
