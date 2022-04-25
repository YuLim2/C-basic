#include <iostream>
using namespace std;

class Calculator{

    int add;
    int div;
    int min;
    int tim;
    public:
        float Add(float x, float y);
        float Div(float x, float y);
        float Min(float x, float y);
        float Tim(float x, float y);
    
        void Init();
        void ShowOpCount();
};

float Calculator::Add(float x, float y){
        add++;
        return x + y;
}
float Calculator::Div(float x, float y){
        div++;
        return x / y;
}
float Calculator::Min(float x, float y){
        min++;
        return x - y;
}
float Calculator::Tim(float x, float y){
        tim++;
        return x * y;
}

 void Calculator::Init(){
    add = 0;
    div = 0;
    min = 0;
}

void Calculator::ShowOpCount(){
    cout << add << min << div << tim <<endl;
}

int main(void)
{
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
    cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
    cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
    cal.ShowOpCount();
    return 0;
}