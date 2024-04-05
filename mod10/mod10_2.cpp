#include <iostream>

using namespace std;

int fib (int x)
{
    if (x > 1)
    {
        // cout << x-1 << endl;
        // cout << x-2 << endl;
        return (fib(x-1)+fib(x-2));
    }
    return x;
}

int main()
{
    int inp;
    int counter = 0;
    cout << "How many terms do you wish?\n";
    cin >> inp;
    while (counter < inp)
    {
        cout << fib(counter) << endl;
        counter++;
    }
    return 0;
}