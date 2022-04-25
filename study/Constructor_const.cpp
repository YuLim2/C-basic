#include <iostream>
using namespace std;

class AAA
{
public:
    AAA()
    {
        cout << "empty obejct" << endl;
    }
    void ShowYourName() const
    {
        cout << "I'm class AAA" << endl;
    }
};

class BBB
{
private:
    AAA& ref;
    const int num;
    const int& refNum;
public:
    BBB(AAA& r, const int& n1, const int& n2): ref(r), num(n1), refNum(n2)
    {
        cout << "generate BBB" << endl;
    }
    void ShowYourName() const
    {
        ref.ShowYourName();
        cout << "and" << endl;
        cout << "I ref num " << refNum << endl;
        cout << "and" << endl;
        cout << "I have const num " << num << endl;
    }
};

int main(void)
{
    AAA obj1;
    BBB obj2(obj1, 10, 20);
    obj2.ShowYourName();
    return 0;
}
