#include <iostream>
#include <vector>

using namespace std;

int vectorSum(vector <int> beeble)
{
    int sol = 0;
    for (int i = 0; i<beeble.size(); i++)
    {
        sol += beeble[i];
    }
    return sol;
}

int main()
{
    vector <int> beeble = {1, 2, 3, 5, 7};
    cout << "The value of all vector values is " << vectorSum(beeble) << endl;
    return 0;
}