#include <iostream>

using namespace std;


int factorial(int x)
{
    if (x > 1)
    {
        return x *= factorial(x-1);

    }
    else
    {
        return x;
    }
}

int main()
{
    int bleep;
    cout << "What number do you want as a factorial?\n";
    cin >> bleep;
    cout << factorial(bleep);
    return 0;
}