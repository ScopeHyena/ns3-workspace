#include <iostream>

class Calculator {
public:
    double Calculate(double x, char oper, double y) {
        switch(oper) {
            case '+':
                return x + y;
            case '-':
                return x - y;
            case '*':
                return x * y;
            case '/':
               return x / y;
            default:
                return 0.0;
        }
    }
};

int main() {
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;

    char oper = '+';

    std::cout << "====== Console Calculator ======" << std::endl << std::endl;
    std::cout << "Enter the operation like this: a+b | a-b | a*b | a/b" << std::endl;

    Calculator c;
    while (true) {
        std::cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        std::cout << "Result: " << x << oper << y << "=" << result << std::endl;
    }

return 0;

}