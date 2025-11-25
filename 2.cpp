// Checking for Prime Numbers
// Difficulty: Easy
// Topics: Basic Programming, Number Theory
// Description: Write a program to determine if a number is prime.
// Example:
// Input: number = 7
// Output: Prime
// Explanation: 7 has no divisors other than 1 and itself, so it is a prime number.

#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int count = 0;
    for(int i=1; i<=num; i++) {
        if(num % i == 0){
            count++;
        }
          
    }
    if(count <=2){
        cout << "Prime" << endl;
    }else{
        cout << "Not Prime" << endl;
    }
    return 0;
}