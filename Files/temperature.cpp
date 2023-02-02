#include <iostream>

int main() {

    // Declare variables
    double tempf;
    double tempc;

    // Ask the user
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> tempf;

    // Calculate the temperature
    tempc = (tempf - 32) / 1.8;

    // Display the temperature to the user
    std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}