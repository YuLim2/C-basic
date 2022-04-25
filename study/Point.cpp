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
	public:
	    void InitMembers(char* ID, int fuel, int speed);
	    void ShowCarState();
	    void Accel();
	    void Break();
};

void Car::InitMembers(char* ID, int fuel, int speed)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = speed;
}

int main(void)
{
    
	return 0;
}