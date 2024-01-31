#include <iostream>

using namespace std;

int main()
{
    string firstN;
    string lastN;
    int firstL;
    int lastL;
    cout << "What is your first name?\n";
    cin >> firstN;
    firstL = firstN.length()/2;
    cout << "What is your last name? \n";
    cin >> lastN;
    lastL = lastN.length()/2;
    cout << "Your first nickname is " + firstN.substr(0, firstL) + lastN.substr(0, lastL) << endl;
    cout << "Your second nickname is " + lastN.substr(0, lastL) + firstN.substr(0, firstL) << endl;
    return 0;
}