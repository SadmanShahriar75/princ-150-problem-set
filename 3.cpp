// Validating Leap Years
// Difficulty: Easy
// Topics: Basic Programming, Date Handling
// Description: Write a program to check if a given year is a leap year.
// Example:
// Input: year = 2020
// Output: Leap Year
// Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.



#include <iostream>
using namespace std;

int main(){
    int year;
    cin >> year;
   
  
    if(year % 4 ==0 || year % 400 == 0){
        cout << "Leap year" << endl;
    }else if(year % 100 ==0){
        cout << "Not Leap Year" << endl;
    }
    else{
        cout << "Not Leap Year" << endl;
    }
    return 0;
}


