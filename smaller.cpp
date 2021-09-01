/*

Author: Eric Li

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 1A



Purpose: The program compares and finds the smaller of two integers inputted
through user input.

*/

#include <iostream>

using namespace std;

int main(){
  int One;
  int Two;

  //Takes in user input
  cout << "Enter the first number: " << endl;
  cin  >> One;

  cout << "Enter the second number: " << endl;
  cin >> Two;

  //compares the two numbers
  if(One < Two){
    cout << "The smallest of the two is " << One;
  } else {
    cout << "The smallest of the two is " << Two;
  }

  return 0;
}
