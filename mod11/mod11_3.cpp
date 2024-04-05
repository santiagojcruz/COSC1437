#include <iostream>
#include <vector>

using namespace std;

bool vectorFind(vector <int> beeble, int zeep)
{
    bool yee = false;
    for (int i=0; i< beeble.size(); i++)
    {
        if (beeble[i] == zeep)
        {
            yee = true;
        }
    }
    return yee;
}

int main()
{
    int booble = 0;
    vector <int> beeble = {1, 3, 5 ,7, 9};
    cout << "Which number would you like to see?";
    cin >> booble;

}