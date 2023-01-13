#include <iostream>
#include <string>
using std::string; using std::cout; using std::cin;

class Calculator {
public:
  string call;
  int num;
  int num1;
  void eq() {
    cout << "Calculator: ";
    cin >> call;
    cout << "Enter your first number: ";
    cin >> num;
    cout << "Enter your second number: ";
    cin >> num1;
    if (call == "add") {
      num1 += num;
    } else if (call == "sub") {
      num1 -= num;
    }
    cout << "Your answer is: " << num1 << "\n";
  }
};

int main() {
  Calculator cal;
  cal.eq();
  return 0;
}