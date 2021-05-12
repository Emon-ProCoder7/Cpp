#include <iostream>
#include <vector>
#include <string>
 
int main() {
 
  // Whale, whale, whale.
  // What have we got here?
  std::string input = "turpentine and turtles";
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;

  for (int i=0; i<input.size(); i++){
    for(int v = 0; v<vowels.size(); v++){
      if(input[i] == vowels[v]){
        result.push_back(input[i]);
      } 
      
    }
    if(input[i] == vowels[1] || input[i] == vowels[4]){
        result.push_back(input[i]);
      }
  
  
  }


 for(int j=0; j<result.size(); j++){
   std::cout << result[j];
 }

 std::cout << "\n";


}
