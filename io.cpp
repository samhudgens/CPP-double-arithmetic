#include <iostream>

double getDouble() {
  std::cout << "Please enter a floating point number\n";
  double x;
  std::cin >> x;
  std::cout << "You entered: " << x << "\n";
  return x;
}

char getArithmeticOperator() {
  std::cout << "Please choose an arithmetic operator: +, -, *, or /\n";
  char x;
  std::cin >> x;
  if (x == '+' || x == '-' || x == '*' || x == '/') {
    std::cout << "You entered " << x << "\n";
    return x;
  } else {
    std::cout << "Invalid selection\n";
    getArithmeticOperator();
  }
}

double calculateResult(double value1, double value2, char op) {
  double result;

  if (op == '+') {
    result = value1 + value2;
  } else if (op == '-') {
    result = value1 - value2;
  } else if (op == '*') {
    result = value1 * value2;
  } else if (op == '/') {
    result = value1 / value2;
  }
  std::cout << "The result is: " << result << "\n";
  return result;
}

