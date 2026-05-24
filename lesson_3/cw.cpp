#include <iostream>

using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Введите матечатическое действие: ";
    cin >> op;
    cout << "Введите два числа: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            
                cout << num1 << " / " << num2 << " = " << num1 / num2;
           
            break;
        default:
           
            
    }

    return 0;
}
