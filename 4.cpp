// Calculating Armstrong Numbers
// Difficulty: Easy
// Topics: Basic Programming, Number Theory
// Description: Write a program to check if a number is an Armstrong number.
// Example:
// Input: number = 153
// Output: Armstrong Number
// Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.


#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;  // 123
  
    int k1 = num % 10; // 3
    int k2 = (num / 10) % 10; // 2
    int k3 = num / 100; // 1

   int sum = k1*k1*k1 + k2*k2*k2  + k3*k3*k3;

   if( num == sum){
     cout << "Armstrong" << endl;
   }else{
    cout << "No Armstrong" << endl;
   }
    
    return 0;
}