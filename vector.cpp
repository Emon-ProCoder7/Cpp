#include <iostream>
#include <vector>


int main(){
  std::vector<int> vector = {2, 4, 3, 6, 1, 9};

  int even = 0;
  int odd = 1;

 for (int i = 0; i < vector.size(); i++){
  if (vector[i] % 2 == 0){
    even += vector[i];
  } else {
    odd *= vector[i];
  }

 }

std::cout << "Sum of even numbers is " << even << "\n";
std::cout << "Product of odd numbers is " << odd << "\n";








}
