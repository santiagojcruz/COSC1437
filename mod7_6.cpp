#include <iostream>

using namespace std;

int main ()
{
    int lHanded = 0;
    int rHanded = 0;
    char temp;
    for (int i=0; i >=0;)
    {
        cout << "Enter an L if you are left-handed, an R if you are right-handed or X to quit:\n";
        cin >> temp;
        if (temp == 'L')
        {
            lHanded++;
        }
        else if (temp == 'R')
        {
            rHanded++;
        }
        else if (temp == 'X')
        {
            i = -1;
        }
    }
    cout << "The number of Left Handed: " << lHanded << " \nThe number of Right Handed: " << rHanded << "\n";
    return 0;
}