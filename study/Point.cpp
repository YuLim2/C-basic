#include <iostream>
using namespace std;

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
	Point operator*(int n){
		Point res(xpos*n, ypos*n)
		return res;
	}
};

int main(void)
{
	Point p1(1, 2);
	Point p2(3, 4);
	Point p3 = p1.AddMemberFunc(p2);
	p3.ShowPosition();
	return 0;	
}