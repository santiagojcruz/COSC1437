#include <iostream>

using namespace std;

int main()
{
    //Setting variables
    string firstN;
    string lastN;
    int firstL;
    int lastL;
    //asking for first name
    cout << "What is your first name?\n";
    //getting the name and getting the length of the string and dividing it into 2
    cin >> firstN;
    firstL = firstN.length()/2;
    //same as before but with the last name
    cout << "What is your last name? \n";
    cin >> lastN;
    lastL = lastN.length()/2;
    char in1 = firstN[0];
    char in2 = lastN[0];
    //finally displaying the nichnames using the substring method
    cout << "Your initials are " << in1 << in2 << endl;
    cout << "Your first nickname is " + firstN.substr(0, firstL) + lastN.substr(lastL, lastL*2) << endl;
    cout << "Your second nickname is " + lastN.substr(0, lastL) + firstN.substr(firstL, firstL*2) << endl;
    return 0;
    //punpun had fun with this assignment :3
}