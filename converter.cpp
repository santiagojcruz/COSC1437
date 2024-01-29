#include <iostream>

using namespace std;

int main ()
{
    //declare variables
    double celcius;
    double farenheight;

    //get double celcius number from user
    cout << "What temperature is it in celcius?" << endl;
    cin >> celcius;
    farenheight = (celcius * (9/5.)) + 32;
    //convert to farenheight
    cout << "Your temperature in farenheight is " << farenheight << " degrees" << endl;
    return 0;
}