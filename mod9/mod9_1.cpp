#include <iostream>

using namespace std;

void preReg()
{
    char blep;
    cout << "Have you preregistered? Y/N?\n";
    cin >> blep;
    if (blep == 'Y')
    {
        cout << "You are pre-registered and qualify for a 5% discount.";
    }
    else
    {
        cout << "You have NOT pre-egistered :(        ";
    }
}

int main()
{
    preReg();
}