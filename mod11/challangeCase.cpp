#include <iostream>
#include <vector>

using namespace std;

bool isVectorPalindrome(vector <char> bop, int str, int end)
{
    if ((bop[str]==bop[end]) && ((end-str) > 0))
    {
        isVectorPalindrome(bop, str+1, end-1);    
    }
    else
    {
        return false;
    }
    return true;
}

int main()
{
    bool seep = true;
    vector <char> zee;
    string ble;
    cout << "Enter a word\n";
    cin >> ble;
    for (int i=0; i<ble.size(); i++)
    {
        zee.push_back(ble.at(i));
    }
    cout << endl;        
    if (isVectorPalindrome(zee, 0, zee.size()-1))
    {
        cout << "that is a palindrome\n";
    }
    else 
    {
        cout << "Not a palindrome\n";
    }
    return 0;
}