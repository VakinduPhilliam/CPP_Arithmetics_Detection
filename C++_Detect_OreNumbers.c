//CPP program to check if the given number is Ore number 
//Check if the given number is Ore number or not
//Ore numbers are positive integers whose divisors have a integer harmonic value. 
//Ore numbers are often called as harmonic divisor number. Ore numbers are named after Oystein Ore.

#include <bits/stdc++.h> 
using namespace std; 
  
vector<int> arr; 
  
// Function that returns harmonic mean 

void generateDivisors(int n) 
{ 

    // Note that this loop runs till square root 

    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
  
            // If divisors are equal, store 'i' 

            if (n / i == i) 

                arr.push_back(i); 
  
            else 

           // Otherwise store 'i' and 'n/i' both 

            { 
                arr.push_back(i); 
                arr.push_back(n / i); 
            } 
        } 
    } 
} 
  
// Utility function to calculate harmonic 
// mean of the divisors 

double harmonicMean(int n) 
{ 
    generateDivisors(n); 
  
    // Declare sum variables and initialize 
    // with zero. 
  
    double sum = 0.0; 
  
    int len = arr.size(); 
  
    // calculate denominator 

    for (int i = 0; i < len; i++) 

    sum = sum + double(n / arr[i]); 
  
    sum = double(sum / n); 
  
    // Calculate harmonic mean and return 
  
    return double(arr.size() / sum); 

} 
  
// Function to check if a number is ore number 

bool isOreNumber(int n) 
{ 

    // Calculate Harmonic mean of divisors of n 

    double mean = harmonicMean(n); 
  
    // Check if harmonic mean is an integer or not 

    if (mean - int(mean) == 0) 

        return true; 

    else

        return false; 

} 
  
// Driver Code 

int main() 
{ 
    int n = 28; 
  
    if (isOreNumber(n)) 

        cout << "YES"; 

    else

        cout << "NO"; 
  
    return 0; 
}
