// Else If


// So what happens if you want more than two possible outcomes?
//
// This is where `else if` comes in:
#include <iostream>

int main() {

  double ph = 4.6;

  if (ph > 7) {
   
    std::cout << "Basic\n";
  
  } else if (ph < 7) {

    std::cout << "Acidic\n";
  } else {
    
    std::cout << "Neutral\n";

  }

}
