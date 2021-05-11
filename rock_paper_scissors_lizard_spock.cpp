#include <iostream>
#include <stdlib.h>



int main(){


// Live long and prosper

  srand(time(NULL));
  int computer = rand() % 5 + 1;
  int user = 0; 

  std::cout << "====================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "====================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n\n";
 
  std::cout << "shoot! "; 
  std::cin >> user;



  if (user == 5 && computer == 2){
    std::cout << "Yaaay, You Win!!!🥰😎🥰";



  } else if (user == 2 && computer == 1){
    std::cout << "Yaaay, You Win!!!🥰😎🥰";



  }else if (user == 1 && computer == 4){
    std::cout << "Yaaay, You Win!!!🥰😎🥰";



  }else if (user == 4 && computer == 5){
    std::cout << "Yaaay, You Win!!!🥰😎🥰";



  }else if (user == 5 && computer == 3){
    std::cout << "Yaaay, You Win!!!🥰😎🥰";



  }else if (user == 3 && computer == 4){
    std::cout << "Yaaay, You Win!!!🥰😎🥰";



  }else if (user == 4 && computer == 2){
    std::cout << "Yaaay, You Win!!!🥰😎🥰";



  }else if (user == 2 && computer == 5){
    std::cout << "Yaaay, You Win!!!🥰😎🥰";



  }else if (user == 5 && computer == 1){
    std::cout << "Yaaay, You Win!!!🥰😎🥰";



  }else if (user == 1 && computer == 3){
    std::cout << "Yaaay, You Win!!!🥰😎🥰";



  } else if (user == computer){
      std::cout << "It's a tie!🙄"; 
  } else {
    std::cout << "Sorry. Computer Wins!!😥";
  }




}
