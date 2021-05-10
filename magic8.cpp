#include <iostream>
#include <cstdlib>


int main(){

  // Your Future is here.

  std::cout << "MAGIC 8-BALL: \n";
  srand(time(NULL));
  int answer = std::rand() % 10;
  

  if (answer == 0){
    std::cout << "It is certain";

  } else if (answer == 1){
    std::cout << "It is decidedly so.";
    
  } else if (answer == 2){
    std::cout << "Without a doubt.";
    
  } else if (answer == 3){
    std::cout << "Yes - definitely.";
    
  } else if (answer == 4){
    std::cout << "You may rely on it.";
    
  } else if (answer == 5){
    std::cout << "As I see it, yes.";
    
  } else if (answer == 6){
    std::cout << "Most likely.";
    
  } else if (answer == 7){
    std::cout << "Outlook good.";
    
  } else if (answer == 8){
    std::cout << "Signs point to yes.";
    
  } else {
    std::cout << "Very doubtful";
  }




}
