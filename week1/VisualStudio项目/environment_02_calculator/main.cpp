#include <iostream>

class Calculator {
public:
    double Calculate(double x, char oper, double y);
};

double Calculator::Calculate(double x, char oper, double y) {
    switch (oper) {
    case '+': return x + y;
    case '-': return x - y;
    case '*': return x * y;
    case '/': return x / y;
    default: return 0.0;
    }
}

int main() {
    double x = 0.0, y = 0.0, result = 0.0;
    char oper = '+';
    Calculator calculator;
    std::cout << "Enter x operator y (0 $ 0 to exit):\n";
    while (std::cin >> x >> oper >> y) {
        if (oper == '$') break;
        if (oper != '+' && oper != '-' && oper != '*' && oper != '/') {
            std::cout << "Unknown operator.\n";
            continue;
        }
        if (oper == '/' && y == 0.0) {
            std::cout << "Division by zero.\n";
            continue;
        }
        result = calculator.Calculate(x, oper, y);
        std::cout << "Result: " << result << '\n';
    }
    if (std::cin.fail() && !std::cin.eof()) {
        std::cout << "Invalid input.\n";
        return 1;
    }
    return 0;
}
