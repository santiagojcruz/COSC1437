#include <iostream>
#include <vector>

using namespace std;

class Cake

{
    private:  
        int layers;
        string flavor;
        vector <string> toppings;
    public:
        string getFlavor()
        {
            return flavor;
        }
        int getLayers()
        {
            return layers;
        }
        vector <string> getToppings()
        {
            return toppings;
        }
        void setLayers()
        {
            cout << "How many Layers are in your cake? \n";
            cin >> layers;
        }
        void setFlavor()
        {
            cout << "What is your flavor of cake? \n";
            cin >> flavor;
        }
        void setToppings()
        {
            bool beep = true;
            string temp;
            while(beep)
            {
                cout << "Enter a topping or 'NO' to stop\n";
                cin >> temp;
                if (temp=="NO")
                {
                    beep=false;
                }
                else 
                {
                    toppings.push_back(temp);
                }
            }
        }
};

class Cookie 
{
    private: 
        bool isCrispy;
        bool isGlutenFree;
        string topping;
    public:
        bool getCrispy()
        {
            return isCrispy;
        }
        bool getGluten()
        {
            return isGlutenFree;
        }
        string getTopping()
        {
            return topping;
        }
        void setCrispy()
        {
            string temp;
            cout << "Is this cookie crispy? 'YES' or 'NO'\n";
            cin >> temp;
            if (temp == "YES")
            {
                isCrispy=true;
            }
            else if(temp == "NO")
            {
                isCrispy=false;
            }
        }
        void setGluten()
        {
            string temp;
            cout << "Is this cookie gluten free? 'YES' or 'NO'\n";
            cin >> temp;
            if (temp == "YES")
            {
                isGlutenFree=false;
            }
            else if(temp == "NO")
            {
                isGlutenFree=true;
            }
        }
        void setTopping()
        {
            string ya;
            cout << "What topping you have? \n";
            cin >> ya;
            topping=ya;
        }
};

class Game
{
    private:
        int resolution;
        int frameRate;
        string name;
    public:
        int getResolution()
        {
            return resolution;
        }
        int getFrameRate()
        {
            return frameRate;
        }
        string getName()
        {
            return name;
        }
        void setResoltuiion()
        {
            cout << "What is the resolution? \n";
            cin >> resolution;
        }
        void setFrameRate()
        {
            cout << "What is the max framerate of the console?\n";
            cin >> frameRate;
        }
        void setName()
        {
            cout << "What is the name of this console?\n";

        }
//hi-angelina rivera
};

int main()
{
    Cake jasmine;
    Cookie magic;
    Game darkSouls;
    return 0;
}