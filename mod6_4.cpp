#include <iostream>

using namespace std;

int main() 
{
    string name;
    double yearSal;
    int perfRat;

    cout << "What is your name?\n";
    cin >> name;
    cout << "What is your yearly salary?\n";
    cin >> yearSal;
    cout << "What is your performance rating?\n";
    cin >> perfRat;
    switch (perfRat)
    {
        case 1:
        cout << "Name: " << name << " Yearly Salary: " << yearSal << " Performance Rating: " << perfRat << " Bonus is 25% \n";
        break;

        case 2:
        cout << "Name: " << name << " Yearly Salary: " << yearSal << " Performance Rating: " << perfRat << " Bonus is 15% \n";
        break;

        case 3:
        cout << "Name: " << name << " Yearly Salary: " << yearSal << " Performance Rating: " << perfRat << " Bonus is 10% \n";
        break;

        case 4:
        cout << "Name: " << name << " Yearly Salary: " << yearSal << " Performance Rating: " << perfRat << " Bonus is 0% \n";
        break;
    }
}