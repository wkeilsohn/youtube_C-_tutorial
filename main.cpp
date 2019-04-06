#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter first number, please: ";
    cin >> num1;

    cout << "Enter second number, please: ";
    cin >> num2;

    cout << "Enter operator, please: ";
    cin >> op;

    int result;

    if(op == '+'){
        result = num1 + num2;
    } else if(op == '-'){
        result = num1 - num2;
    } else if(op == '*'){
        result = num1 * num2;
    } else if(op == '/'){
        result = num1 / num2;
    } else{
    cout << "Invalid operator";
    }
    cout << "The result is "<< result;

    return 0;
}
