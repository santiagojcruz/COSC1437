#include <iostream>

using namespace std;



void assignSeat(string arr [3][3])
{
    int x, y;
    string name;
    cout << "What column would you like; 1, 2 or 3?\n";
    cin >> x;
    cout << "What row would you like; 1, 2 or 3?\n";
    cin >> y;
    if (arr[x-1][y-1] == "NA")
    {
        cout << "What is your name ?";
        cin >> name;
        arr[x-1][y-1]=name;
    }
    else 
    {
        cout << "SEAT IS ALREADY TAKEN LOSER";
    }
}
void printChart(string arr [3][3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        for (int j = 0; j <3; j++)
        {
            cout << arr[i][j] << "\t";
        }
    }
}
void emptySeat(string arr [3][3])
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; i<3; i++)
        {
            if (arr[i][j] == "NA")
            {
                cout << "The seat in row " << i+1 << " and column " << j+1 << "is empty\n";
            }
        }
    }
}
int main()
{
    string chart[3][3] = {
        {"NA", "NA", "NA"},
        {"NA", "NA", "NA"},
        {"NA", "NA", "NA"},
    };
    emptySeat(chart);
    assignSeat(chart);
    printChart(chart);
    return 0;
}