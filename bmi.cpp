#include <iostream>
#include <cmath>
#include <string>

int main() {
  
  double height, weight, bmi;
  
  
  // Asking user for their height & name

 
  
  std::cout << "Type in your height (m): ";
  std::cin >> height;
  
  //asking the user for their weight and calculate BMI
  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;

  bmi = weight / pow(height, 2) ;
  std::cout << "Thank You, Your BMI is: " << bmi << "\n" ;
  
  
  
  
  
  
  
  
  return 0;

}
