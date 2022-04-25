#include <cstring>
#include <iostream>
using namespace std;

class Person
{
public:
    char *name;
    int age;

public:
    Person(char *myname, int myage)
    {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    void ShowPersonInfo() const
    {
        cout << "이름: " << name << endl;
        cout << "나이: " << age << endl;
    }
    ~Person()
    {
        cout << name << " called destructor" << endl;
        delete[] name;
    }
};

int main(void)
{
    Person* peoele[3];
    char namestr[100];
    int age;

    for(int i=0; i<3; i++)
    {
        cout << "이름: ";
        cin >> namestr;
        cout << "나이: ";
        cin >> age;
        peoele[i] = new Person(namestr, age);
    }

    for(int i=0; i<3; i++)
    {
        people[i]->ShowPersonInfo();
    }
    delete peoele[1]
    delete peoele[2]
    delete peoele[3]
    
    return 0;
}