/*
 * Beginner Calculator Project
 * Author: Yajas Malhotra (GitHub: YajasM)
 * Description: A menu-driven console calculator built in C++ featuring 
 *              basic arithmetic, algebraic, and trigonometric operations.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    bool flag = true;
    
    // Main program loop
    while (flag == true) {
        // --- Display Menu Options ---
        cout << "\n--------Calculator--------" << endl;
        cout << "Options " << endl;
        cout << "1: ADD (+)" << endl;
        cout << "2: SUBTRACT (-)" << endl;
        cout << "3: MULTIPLY(*)" << endl;
        cout << "4: DIVISION(/)" << endl;
        cout << "5: REMAINDER" << endl;
        cout << "6: POWER" << endl;
        cout << "7: SQUARE ROOT" << endl;
        cout << "8: LOG BASE 10" << endl;
        cout << "9: Trigonometric" << endl;
        cout << "10 : EXIT" << endl;
        cout << "Input the operation you want to use" << endl;
        
        int N;
        cin >> N;

        // 1. Addition
        if (N == 1) {
            cout << "Enter the two numbers you want to operate on" << endl;
            double A, B;
            cin >> A >> B;
            double sum = A + B;
            cout << "Sum of " << A << " & " << B << " is " << sum << endl;
        }
        // 2. Subtraction
        else if (N == 2) {
            cout << "Enter the two numbers you want to operate on" << endl;
            double A, B;
            cin >> A >> B;
            double diff = A - B;
            cout << "Difference of " << A << " & " << B << " is " << diff << endl;
        }
        // 3. Multiplication
        else if (N == 3) {
            cout << "Enter the two numbers you want to operate on" << endl;
            double A, B;
            cin >> A >> B;
            double pro = A * B;
            cout << "Product of " << A << " & " << B << " is " << pro << endl;
        }
        // 4. Division
        else if (N == 4) {
            cout << "Enter the two numbers you want to operate on" << endl;
            double A, B;
            cin >> A >> B;
            
            if (B == 0) {
                cout << "Error: Division by zero is undefined!" << endl;
            } else {
                double div = A / B;
                cout << "Quotient of " << A << " & " << B << " is " << div << endl;
            }
        }
        // 5. Remainder / Modulo
        else if (N == 5) {
            cout << "Enter the two numbers you want to operate on" << endl;
            long long A, B;
            cin >> A >> B;
            
            if (B == 0) {
                cout << "Error: Modulo by zero is undefined!" << endl;
            } else {
                long long rem = A % B;
                cout << " Modulo of " << A << " & " << B << " is " << rem << endl;
            }
        }
        // 6. Power Calculation
        else if (N == 6) {
            cout << "Enter the two numbers you want to operate on" << endl;
            double A, B;
            cin >> A >> B;
            double powe = pow(A, B);
            cout << A << " To the power " << B << " is " << powe << endl;
        }
        // 7. Square Root
        else if (N == 7) {
            cout << "Enter the number you want to operate on" << endl;
            double A;
            cin >> A;
            
            if (A < 0) {
                cout << "Error: Cannot take the square root of a negative number in real numbers!" << endl;
            } else {
                double sq = sqrt(A);
                cout << " Square root of " << A << " is " << sq << endl;
            }
        }
        // 8. Logarithm Base 10
        else if (N == 8) {
            cout << "Enter the number you want to operate on" << endl;
            double A;
            cin >> A;
            
            if (A <= 0) {
                cout << "Error: Logarithm base 10 requires a positive number (greater than 0)!" << endl;
            } else {
                double l = log10(A);
                cout << " Log base 10 of " << A << " is " << l << endl;
            }
        }
        // 9. Trigonometric Submenu
        else if (N == 9) {
            cout << "Enter the radian value" << endl;
            double A;
            cin >> A;
            cout << "Enter the trignometric function you want to use" << endl;
            cout << "Options" << endl << "1:SIN" << endl << "2:COS" << endl << "3: TAN" << endl;
            int n;
            cin >> n;

            if (n == 1) {
                cout << "SIN of " << A << " is " << sin(A) << endl; 
            }
            else if (n == 2) {
                cout << "COS of " << A << " is " << cos(A) << endl;
            }
            else if (n == 3) {
                cout << "TAN of " << A << " is " << tan(A) << endl;
            }
            else {
                cout << "Invalid trigonometric option!" << endl;
            }
        }
        // 10. Exit Condition
        else if (N == 10) {
            cout << "!!!! THANKS FOR USING MY CALCULATOR !!!!" << endl;
            flag = false;
            break; 
        }
        // Catch-all for menu selection errors
        else {
            cout << "Invalid Choice" << endl;
        }
    }
    return 0;
}
