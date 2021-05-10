#include <iostream>

int main() {
  double pesos, reais, soles, dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian soles: ";
  std::cin >> soles;


/*
 Pesos conversion rate: 0.00032
 Reais conversion rate: 0.27
 Soles conversion rate: 0.3
  */
  double conversion_rate1 =  0.00032;
  double conversion_rate2 = 0.27;
  double conversion_rate3 = 0.3;

  dollars = (conversion_rate1 * pesos) + (conversion_rate2 * reais) + (conversion_rate3 * soles);

  std::cout << "Total USD = $" << dollars << "\n";


  
}
