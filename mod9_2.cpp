#include <iostream>

using namespace std;

void sum(int x)
{
    int sum=x;
    for (int i=1; i<x; i++)
    {
        sum +=x-i;
    }
    cout << "The sum of " << x << " is " << sum << endl;
}
void product(int x)
{
    int prod=x;
    for (int i=1; i<x; i++)
    {
        prod *=x-i;
    }
    cout << "The product of " << x << " is " << prod << endl;
}

int main()
{
    int input=1;
    bool blep = false;
    while(blep == false)
    {
        cout << "Enter an integer or 0 to quit\n";
        cin >> input;
        if (input == 0)
        {
            blep = true;
        }
        else
        {
            sum(input);
            product(input);
        }
    }
    

}