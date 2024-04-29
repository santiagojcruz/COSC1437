#include <iostream>

using namespace std;

int numberMaker(int* &k)
{
    *k *= *k;
}



int main()
{
    int num = 99;
    int* sup = &num;
    cout << "The starting number is " << num << endl;
    numberMaker(sup);
    cout << "The ending number is" <<  num << endl;
    return 0;
}