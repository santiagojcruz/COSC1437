#include <iostream>
#include <array>
using namespace std;
const int Z = 3;

int ring(int pleeb[][3], int coll);
void printArr(int pleeb[][3]);
void hanoi (int pleeb[][Z], int numOfRings ,int start, int end)
{
    if (numOfRings == 1)
    {
        //put the thingy on the thingy        
        pleeb[ring (pleeb, end-1) ] [end-1] = pleeb[ring (pleeb, start-1) ] [start-1];
        pleeb[ring (pleeb, start-1) ] [start-1]=0;
        printArr(pleeb);
    }
    else
    {
        int spare = 6 - (start+end);
        hanoi(pleeb, numOfRings-1, start-1, spare-1);
        hanoi(pleeb, numOfRings-1, spare-1, end-1);

    }
}
//find the ring
int ring(int pleeb[][3], int coll)
{
    int result;
    int x = end(pleeb[0])-begin(pleeb[0]);
    for (int i=0; i<x; i++)
    {
        if (pleeb[i][coll] != 0)
        {
            result = i;
            i=x+10;
        }
        else if(i=x)
        {
            result=i;
        }
    }
    return result;
}
//method to print array
void printArr(int pleeb[][3])
{
    for (int i=0; i<end(pleeb[0])-begin(pleeb[0]);i++)
    {
        cout << "\n";
        for (int j=0; j<3;j++)
        {
            cout << pleeb[i][j] << "\t";
        }
    }
    cout << "\n";
}
int main()
{
    int rings;
    cout << "How many rings would you like?\n";
    cin >> rings;
    int play[rings][3];
    //setting up the array with 0s
    for (int i=0; i <= rings; i++)
    {
        for (int j=0; j<3; j++)
        {
            play[i][j] = 0;
        }
    }
    printArr(play);
    //have the first row be with the rings
    for (int i=rings; i > 0; i--)
    {
        play[i-1][0] = i;
    }
    printArr(play);
    hanoi(play, rings, 1, 3);
    return 0;
}