#include <iostream>

int main() {
  int dog_age;
  std::cout << "Please, input your Dog age: ";
  std::cin >> dog_age;

  // Tommy is 6 years old
  
  int early_years, later_years, human_years;
  
  // Fact: The first two years of a dog’s life count as 21 human years.

  early_years = 21;

  // Fact: Each following year counts as 4 human years.
  later_years = (dog_age - 2) * 4;

  // Your dog's age in human years
  human_years = early_years + later_years;
  


  std::cout << "Hello, Your dog is " << human_years << " years old in human years.\n";
}
