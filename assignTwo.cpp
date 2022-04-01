// Copyright (c) 2021 Titwech wal All rights reserved.
// Created By: Titwech Wal
// Date: March 28. 2022

// This program asks the user for a number
// To calculate the surafce area and
// Volume of a tetrahedron

#include <iostream>
#include <cmath>

// declare variables
float side, area, volume;

int main() {
  // get input from user for edge
  std::cout << "Lets calculate the area and\n";
  std::cout << "volume of a tetrahedron.\n";
  std::cout << "Enter the side (m): ";
  std::cin >> side;

  // calculate area and volume
  area = (sqrt(3) * (side * side));
  volume = (pow(side, 3) / (6 * sqrt(2)));

  // display the results to the user
  std::cout << std::endl;
  std::cout << "Area = " << area <<"cm.\n";
  std::cout << "Volume = " << volume << "cm.\n";
}
