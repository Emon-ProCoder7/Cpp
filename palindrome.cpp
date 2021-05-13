#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  std::string rev;
  for(int i = text.size() - 1; i >= 0; i--){
    rev.push_back(text[i]);
  }
  if (rev == text){
    return true;
  } else {
    return false;
  }
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
