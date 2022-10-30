#include <iostream>

int main() {

  int number = 9;

  switch(number) {

    case 1 :
      std::cout << "Bulbasaur\n"
      break;
    case 2 :
      std::cout << "Ivysaur\n";
      break;
    case 3 : 
      std::cout << "Venusaur\n";
      break;
    case 4 : 
      std::cout << "Charmander\n";
      break;
    case 5 :
      std::cout << "Charmeleon\n";
      break;
    case 6 :
      std::cout << "Charizard\n";
      break;
   default : 
      std::cout << "Unknown\n";
      break;

  }

}
