#include <iostream>

using namespace std;

int main() 
{
    double totalScore = 0;
    double input = 0;
    int NOI = 0;
    do 
    {
        cout << "Enter the rating score\n";
        cin >> input;
        NOI++;
        totalScore += input;
    }
    while(input >= 0);
    cout << "The average rating is " << totalScore/NOI << "\n";
    return 0;
}