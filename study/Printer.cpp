#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
    string str;

    public:
    void SetString(string setStr){
        str = setStr;
    }
    void ShowString(){
        cout << str << endl;
    }
};

int main(void)
{
    Printer pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();
    
    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}
