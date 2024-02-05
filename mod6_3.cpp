#include <iostream>

using namespace std;

int main()
{
    double tdv;
    double NOT;
    double NOS;
    double score;
    int bonus;
    cout << "What is your total dollar value? \n";
    cin >> tdv;
    cout << "What is your Number of Transactions\n";
    cin >> NOT;
    cout << "What is your Number of Shifts\n";
    cin >> NOS;
    score = (tdv/NOT)/NOS;
    if (score <=30)
    {
        bonus = 50;
    }
    else if ((score > 30) && (score < 70))
    {
        bonus = 75;
    }
    else if ((score > 69) && (score < 200))
    {
        bonus = 100;
    }
    else if (score >= 200)
    {
        bonus = 200;
    }
    cout << "Your bonus will be $" << bonus << "\n";
    return 0;
}