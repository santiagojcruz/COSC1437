#include <iostream>

using namespace std;

int main() 
{
    double totalScore = 0;
    double input = 0;
    int NOI = 0;
    for (int i = 0; i >= 0;)
    {
        cout << "Enter the rating score\n";
        cin >> input;
        if (input >= 0)
        {
            NOI++;
            totalScore += input;
        }
        else 
        {
            i =-99;
        }
        
    }
    cout << "The average rating is " << totalScore/NOI << "\n";
    return 0;
}