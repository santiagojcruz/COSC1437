#include <iostream>

using namespace std;

int main() 
{
    double totalScore = 0;
    double input = 0;
    int NOI = 0;
    while (input >= 0)
    {
        NOI++;
        cout << "Enter the rating score\n";
        cin >> input;
        totalScore += input;
    }
    cout << "The average rating is " << totalScore/NOI << "\n";
    return 0;
}