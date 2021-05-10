#include <iostream>

int main() {
  
  double weight;
  std::cout << "Input your Earth Weight: ";
  std::cin >> weight;

  std::cout << "\nI have information for the following planets:\n\n";
  std::cout << "  1. Mercury  2. Venus   3. Mars    4. Jupiter\n";
  std::cout << "   5. Saturn  6. Uranus  7. Neptune\n\n";
  
  int x;
  std::cout << "Input a number for the planet you want to fight on: ";
  std::cin >> x;

  switch(x){
    case 1:
      weight *= 0.38;
      break;
    case 2:
      weight *= 0.91;
      break;
    case 3:
      weight *= 0.38;
      break;
    case 4:
      weight *= 2.34;
      break;
    case 5:
      weight *= 1.06;
      break;
    case 6:
      weight *= 0.92;
      break;      
    case 7:
      weight *= 1.19;
      break;    

  }
  
  
  std::cout << "\nYour Weight: " << weight << "\n";   
  
}
