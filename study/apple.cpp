#include <iostream>
using namespace std;

class FruitSeller
{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    void InitMembers(int price, int num, int money)
    {
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }
    int TellApplePrice()
    {
        return APPLE_PRICE;
    }
    void ShowSalesResult()
    {
        cout << "남은 사과: " << numOfApples << endl;
        cout << "판매 수익: " << myMoney << endl;
    }
    int SaleApples(int money){
        int cnt =  money / APPLE_PRICE;
        myMoney += cnt*APPLE_PRICE;
        numOfApples -= cnt;
        return cnt;
    }
};

class FruitBuyer
{
private:
    int myMoney;
    int numOfApples;
public:
    void InitMembers(int money)
    {
        myMoney = money;
        numOfApples = 0;
    }
    void ShowBuyResult()
    {
        cout << "현재 잔액: " << myMoney << endl;
        cout << "사과 개수: " << numOfApples << endl;
    }
    void BuyApples(int n, FruitSeller& fs){
        int payMoney = payMoney - n*fs.TellApplePrice();
        int appleNum = fs.SaleApples(payMoney);
        numOfApples += appleNum;
    }
};

int main(void){
    FruitSeller fs;
    FruitBuyer fb;
    fs.InitMembers(1000, 20, 0);
    fb.InitMembers(5000);
    fb.BuyApples(2, fs);
    fs.ShowSalesResult();
    fb.ShowBuyResult();
}