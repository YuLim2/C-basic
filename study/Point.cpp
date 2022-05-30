#include <iostream>
using namespace std;

Point operator*(int& n, Point& p){
		Point res(n*p.xpos, n*p.ypos)
		return res;
	}

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x, int y): xpos(x), ypos(y) {}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point operator*(int& n){
		Point res(xpos*n, ypos*n)
		return res;
	}
	friend Point operator*(const int&, const Point&)
}; 

int main(void)
{
    Point p1(1, 2);
    Point p2(3, 4);
    
    Point p3 = p1*p2;
    p3.ShowPosition();
    
    Point p4 = p1*5;
    p4.ShowPosition();
    
    Point p5 = 5*p1;
    p5.ShowPosition();
    
    if(p4==p5)
        cout << "p4 == p5" << endl;
    if(p4!=p5)
        cout << "p4 != p5" << endl;
    
    return 0;   
}