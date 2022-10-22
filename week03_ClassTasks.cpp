#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    // TASK 0 -> Area and Volume of right-angled parallelepiped
    /* int threeDigitNumber;
    cout << "Enter a threeDigitNumber: ";
    cin >> threeDigitNumber;
    int firstDigit = threeDigitNumber / 100;
    int secondDigit = threeDigitNumber / 10 % 10;
    int thirdDigit = threeDigitNumber % 10;
    int area = 2 * (firstDigit * secondDigit + firstDigit * thirdDigit + secondDigit * thirdDigit);
    int volume = firstDigit * secondDigit * thirdDigit;
    cout << "The area is: S = " << area << endl;
    cout << "The volume is: V = " << volume << endl; */

    // TASK 1 -> isDivisibleByTwo
    /* int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Is divisible by 2: ";
    if (number % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    } */

    // TASK 2 -> basicCalculator
    /* double a, b;
    char operation;
    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;
    cout << "Enter operation ( + , - , * , / ): ";
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "Enter a valid operation." << endl;
    } */

    // TASK 3 -> uniqueDigits
    /* int a, b, c, d; // For simplicity, a = firstDigit, b = secondDigit, c = thirdDigit, d = lastDigit;
    int number;
    cout << "Enter a four-digit number: ";
    cin >> number;
    a = number / 1000;
    b = number / 100 % 10;
    c = number / 10 % 10;
    d = number % 10;
    if ((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d)) // Easy to check with combination-Newton formula -> (4 over 2) = 4!/(2!*2!) = 24/4 = 6 ;)
    {
        cout << "Are the digits unique: YES" << endl;
    }
    else
    {
        cout << "Are the digits unique: NO" << endl;
    } */
    return 0;
}