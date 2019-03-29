
// C++ program to check if a number is strong or not. 
// Strong Numbers are the numbers whose sum of factorial of digits is equal to the original number. 
// Given a number, check if it is a Strong Number or not.

#include <bits/stdc++.h> 
using namespace std; 
  
int f[10]; 
  
// Fills factorials of digits from 0 to 9. 

void preCompute() 
{ 
    f[0] = f[1] = 1; 
    for (int i = 2; i<10; ++i) 
        f[i] = f[i-1] * i; 
} 
  
// Returns true if x is Strong 

bool isStrong(int x) 
{ 
    int factSum = 0; 
  
    // Traverse through all digits of x. 

    int temp = x; 
    while (temp) 
    { 
        factSum += f[temp%10]; 
        temp /= 10; 
    } 
  
    return (factSum == x); 
} 
  
// Driver code 

int main() 
{ 
    preCompute(); 
  
    int x = 145; 
    isStrong(x) ? cout << "Yes\n" : cout << "No\n"; 
    x = 534; 
    isStrong(x) ? cout << "Yes\n" : cout << "No\n"; 
    return 0; 
}         
