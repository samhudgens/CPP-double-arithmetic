#include <iostream>
#include "io.h"

int main() {
  double input1 = getDouble();
  double input2 = getDouble();
  char op = getArithmeticOperator();

  double result = calculateResult(input1, input2, op);
  return 0;
}