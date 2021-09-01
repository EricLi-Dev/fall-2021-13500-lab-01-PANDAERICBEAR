/*

Author: Eric Li

Course: CSCI-135

Instructor: Zamansky

Assignment: Lab 1D



Purpose: Given a random year and month,
determine and output how many days are in that month

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
  int year;
  int month;
  int counter;

  cout << "Enter Year: ";
  cin  >> year;

  cout << "Enter Month: ";
  cin  >> month;

  //1 is leap year, 0 is common year
  if ((year % 4) != 0){
    counter = 0;
  } else if ((year % 100) != 0){
    counter = 1;
  } else if ((year % 400) != 0){
    counter = 0;
  } else {
    counter = 1;
  }

  //if month is bigger than 7
  int holder = 1;
  if(month > 7){
     holder = month - 7; //subtract and save to holder
     month = 1;
  }

  while (month != 2){
    if ((month % 2) == 0 || (holder % 2) == 0) {
      cout << "30 days" << endl;
      return 0;
    } else {
      cout << "31 days" << endl;
      return 0;
    }
  }

  if ((month == 2) && (counter == 1)){
    cout << "29 days" << endl;
  } else if ((month == 2) && (counter == 0)){
    cout << "28 days" << endl;
  }

  return 0;
}
