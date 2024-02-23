#include <iostream>

using namespace std;

int main()
{
    double min = 9999;
    double max = 0;
    double avg = 0;
    double inp = 0;
    double list [8];

    for (int i = 0; i <= 7; i++)
    {
        cout << "What is your batting average? \n";
        cin >> inp;
        if (inp < min)
        {
            min = inp;
        }
        if (inp > max)
        {
            max = inp;
        }
        list [i] = inp;
    }
    for (int i=0; i <= 7; i++)
    {
        cout << "averages[" << i << "] is " << list[i] << "\n"; 
    }
    cout << "The maximum batting average is " << max << "\n";
    cout << "The minimun batting average is " << min << "\n";
    for (int i=0; i <=7; i++)
    {
        avg += list[i];
    }
    cout << "The average of all batting averages is " << avg/8.;

    return 0;
}