#include <iostream>

int main() {
  // Variables
  double weight_on_earth;
  double weight_on_mars;

  // Get the user's input
  std::cout << "Enter the weight of the item: ";
  std::cin >> weight_on_earth;

  // Convert to mars weight
  // Using this equation:
  // Weight on Mars= (Weight on Earth/9.81) * 3.711

  weight_on_mars = (weight_on_earth / 9.81) * 3.711;

  // Display to the user the weight
  std::cout << "Weight on mars: " << weight_on_mars << ".\n";
}