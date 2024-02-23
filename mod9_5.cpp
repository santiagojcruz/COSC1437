#include <iostream>

using namespace std;

void display(int arr[])
{
    cout << "Original contents of the array:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Reversed order:\n";
    for (int i=4; i>=0; i--)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr [5];
    for (int num=0; num<5; num++)
    {
        cout << "Number #" << num + 1 << endl;
        cin >> arr[num];
    }
    display(arr);
    return 0;
}