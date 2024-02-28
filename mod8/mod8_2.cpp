#include <iostream>

using namespace std;

int main()
{
    string values = "ABCDF";
    int NOS;
    cout << "How many students are there? \n";
    cin >> NOS;
    string name[NOS];
    int age [NOS];
    char grade [NOS];
    for (int i = 0; i < NOS; i++)
    {
        int tempI = -999;
        char tempC = 'E';
        cout << "What is the Name of this student? \n";
        cin >> name[i];
        cout << "How old is this student?\n";
        cin >> tempI;
        age[i] = tempI;
        cout << "What is this students grade?\n";
        cin >> tempC;
        grade[i] = tempC;

    }
    return 0;
}
