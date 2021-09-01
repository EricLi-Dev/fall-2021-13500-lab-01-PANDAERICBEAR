/*

Author: Eric Li

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 1C



Purpose: Given a random year, determine if it is a leap
or common year.

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
  int year;

  //Taking in user input
  cout << "Enter Year: ";
  cin  >> year;

  //Determining if it is a leap year, prints out accordingly
  if (year % 4 != 0){
    cout << "Common Year";
  } else if (year % 100 != 0){
    cout << "Leap Year";
  } else if (year % 400 != 0){
    cout << "Common Year";
  } else {
    cout << "Leap Year";
  }

  return 0;
}
