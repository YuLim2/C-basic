#include <iostream>
using namespace std;

class Point
{
private:
    float x, y;
public:
    Point(const float& xpos, const float& ypos){ x=xpos; y=ypos;}
    float GetX() const { return x; }
    float GetY() const { return y; }
    void SetX(const float& xpos) { x = xpos; }
    void SetY(const float& ypos) { y = ypos; }
    void ShowPosition() const
    {
        cout << "[" << GetX() << ", " << GetY() << "]" << endl;
    }
};


class Circle {

  private:
    Point point;
    int len;

  public:
    Circle(float xpos, float ypos, int r): center(xpos, ypos), radius(r){}

    void ShowCircleInfo() const {
      cout << "반지름 : " << len << endl;
      point.ShowPosition();
    }

};

class Ring {

  private:
    Circle InnerCircle, OutterCircle;

  public:
    Ring(float ICxpos, float ICypos, int IClen, float OCxpos, float OCypos, int OClen): InnerCircle(ICxpos, ICypos, IClen), OutterCircle(OCxpos, OCypos, OClen) {}

    void ShowRingInfo() {
      cout << "Inner Circle Info..." << endl;
      InnerCircle.ShowCircleInfo();
      cout << "Outter Circle Info..." << endl;
      OutterCircle.ShowCircleInfo();
    }

};

int main(void)
{
    Ring ring(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}