#include <iostream>
using namespace std;

int main() {
    char operation;
    double a, b, result;
    // This is the code for Simple Calculator 
	cout<< "\t\t\t\t\t Simple Calculator "<<endl;
    // From this line of code you can choose operation to be perform on the operands
    cout << "Choose and enter any one operator (+, -, *, /): ";
    cin >> operation;
    // To get any two numbers from the user 
    cout << "Enter (any real number) two numbers: ";
    cin >> a >> b;

    //This portion of code performs the operation based on selected operator.
    switch (operation) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (a != 0) {
                result = a / b;
            } else {
                cout << "Error: Division by zero is not allowed.";
                return 1;
            }
            break;
        default:
            cout << "Invalid operator! Choose any operator which is available";
            return 1;
    }

    // This will give* you the output of the following line 
    cout << "Result: " << result << endl;
    return 0;
}
