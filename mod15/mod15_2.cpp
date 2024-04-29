#include <iostream>

using namespace std;



int main()
{
    int num1 = 12;
    int num2 = 17;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* ptr_to_ptr= ptr1;
    cout << "The first pointer is " << *ptr1 << endl;
    cout << "The first pointer to pointer is " << *ptr_to_ptr << endl;
    ptr_to_ptr = ptr2;
    cout << "The second pointer to pointer is " << *ptr_to_ptr << endl;
    return 0;
}