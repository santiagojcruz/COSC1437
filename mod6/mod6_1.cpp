#include <iostream>

using namespace std;

int main() 
{
    bool isOak;
    bool isGilded;
    char answer;
    string message;
    double price = 35;

    cout << "What do you want your sign to say?\n";
    cin >> message;
    if (message.length() > 5)
    {
        price += (message.length() - 5) * 4;
    }
    cout << "Would you like an oak sign y/n? (extra $20)\n";
    cin >> answer;
    if (answer == 'y');
    {
        price += 20;
    }
    cout << "Would you like gilded characters y/n? (extra $15)\n";
    cin >> answer;
    if (answer == 'y');
    {
        price += 15;
    }
    cout << "The price for your sign is " << price << endl;
    return 0;
}