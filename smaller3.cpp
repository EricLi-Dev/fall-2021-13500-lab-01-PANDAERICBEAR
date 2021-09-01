/*

Author: Eric Li

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 1B



Purpose: Finds the smaller of three integers

*/

#include <iostream>

using namespace std;

int main(){
  int One;
  int Two;
  int Three;

  //Takes in user input
  cout << "Enter the first number: " << endl;
  cin  >> One;

  cout << "Enter the second number: " << endl;
  cin >> Two;

  cout << "Enter the third number: " << endl;
  cin >> Three;

  //compares the three numbers to find the smallest
  if(One < Two && One < Three){
    cout << "The smallest of the three is " << One;
  } else if (Two < One && Two < Three) {
    cout << "The smallest of the three is " << Two;
  } else {
    cout << "The smallest of the three is " << Three;
  }

  return 0;
}
