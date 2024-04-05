#include <iostream>
#include <vector>

using namespace std;

void printVec(vector <int> beeble)
{
    cout << "The vector intergers are ";
    for (int i=0; i < beeble.size(); i++)
    {
        cout << beeble[i] << " ";
    }
    cout << endl;
    cout << "The vector reversed is ";
    for (int i=beeble.size()-1; i>=0; i--)
    {
        cout << beeble[i] <<" ";
    }
}

int main()
{
    vector <int> beeble = {1, 2, 3, 5, 7};
    printVec(beeble);
    return 0;
}