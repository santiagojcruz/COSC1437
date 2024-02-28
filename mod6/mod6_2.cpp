#include <iostream>

using namespace std;

int main () 
{
    int arrayInt[3];
    int num1, num2, num3;
    for(int i = 0; i !=3; i++)
    {
        cout << "Enter a number >>\n";
        cin >> arrayInt[i];
    }
    if (arrayInt[0] > arrayInt[1])
    {
        if (arrayInt[1] > arrayInt[2])
        {
            num1 = arrayInt[0];
            num2 = arrayInt[1];
            num3 = arrayInt[2];
        }
        else if (arrayInt[1] < arrayInt[2])
        {
            if (arrayInt[0] > arrayInt[2])
            {
                num1 = arrayInt[0];
                num2 = arrayInt[2];
                num3 = arrayInt[1];
            }
            else if (arrayInt[0] < arrayInt[2])
            {
                num1 = arrayInt[2];
                num2 = arrayInt[0];
                num3 = arrayInt[1];
            }
        }
    }
    else if (arrayInt[0] < arrayInt[1])
    {
        if (arrayInt[1] < arrayInt[2])
        {
            num1 = arrayInt[2];
            num2 = arrayInt[1];
            num3 = arrayInt[0];
        }
        else if (arrayInt[1] > arrayInt[2])
        {
            if (arrayInt[0] < arrayInt[2])
            {
                num1 = arrayInt[1];
                num2 = arrayInt[2];
                num3 = arrayInt[0];
            }
            else if (arrayInt[0] > arrayInt[2])
            {
                num1 = arrayInt[1];
                num2 = arrayInt[0];
                num3 = arrayInt[2];
            }
        }
    }
    cout << "the order from biggest to smallest is: " << num1 << ", " << num2 << ", " << num3 << ", \n";
}
