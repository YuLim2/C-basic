#include <iostream>
#include <cstring>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

class Car
{
private:
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;
    int item;
public:
    void InitMembers(char* ID, int fuel, int speed)
    {
        strcpy(gamerID, ID);
        fuelGauge = fuel;
        curSpeed = speed;
        item = 10;
    }
    
    void ShowCarState()
    {
        cout << "유저ID: " << gamerID << endl;
        cout << "연료량: " << fuelGauge << "%" << endl;
        cout << "남은 아이템 갯수: " << item << "개" << endl;
        cout << "현재속도: " << curSpeed << "km/s" << endl << end;

    }
    
    void Accel()
    {
        if(fuelGauge <= 0)
            return;
        else
            fuelGauge -= FUEL_STEP;
        
        if((curSpeed + ACC_STEP) >= MAX_SPD)
        {
            curSpeed = MAX_SPD;
            return;
        }
        curSpeed += ACC_STEP;
    }
    
    void Break()
    {
        if(curSpeed < BRK_STEP)
        {
            curSpeed = 0;
            return;
        }
        curSpeed -= BRK_STEP;
    }

    void UseItem(Car& car){
        if(item > 0){
            car.curSpeed -= BRK_STEP;
            item --;
        }
    }
};