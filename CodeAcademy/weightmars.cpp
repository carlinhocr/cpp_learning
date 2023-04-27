#include <iostream>

int main() {
  // Add your code below  

  float weightEarth = 0.0;
  float weightMars = 0.;
  std::cout << "Enter your weight:\n";
  std::cin >> weightEarth;

  weightMars = weightEarth * 0.38;

  std::cout << "Your weight on Mars is: " << weightMars << "\n";

}