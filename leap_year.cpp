#include <iostream>

int main() {
  
  int year;
  std::cout << "Enter year: ";
  std::cin >> year;
  
  if (1000 < year && year < 9000){
    if ( year % 4 == 0){

      if (year % 100 != 0 || year % 400 == 0){
        std::cout << year << " falls on a leap year\n";

      } else {
        std::cout << year << " is not a leap year!\n"; 
      }



    } else {
      std::cout << year << " is not a leap year!\n";
    }





  } else {
    std::cout << "Invalid entry\n";
  }


}
