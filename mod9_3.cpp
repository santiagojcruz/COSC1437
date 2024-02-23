#include <iostream>

using namespace std;

void sum(int x, int y)
{
    cout << "The sum of these two numbers is " << x+y << endl;
}
void diff(int x, int y)
{
    cout << "The sum of these two numbers is " << x-y << endl;
}
void prod(int x, int y)
{
    cout << "The sum of these two numbers is " << x*y << endl;
}
int main()
{
    double num1, num2;
    cout << "Enter first numeric value\n";
    cin >> num1;
    cout << "Enter second numeric value\n";
    cin >> num2;
    sum(num1, num2);
    diff(num1, num2);
    prod(num1, num2);
    return 0;
}