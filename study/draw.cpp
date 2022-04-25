#include <iostream>
using namespace std;

class Point {
   int x, y;
   
   public:
      bool InitMembers(int a, int b);
      void ShowPosition();
};

bool Point::InitMembers(int a, int b) {
   if(a < 0 || b < 0 || a > 100 || b > 100) {
      cout<<"벗어난 범위의 값 전달"<<endl;
      return false;
   }
   x = a;
   y = b;
   return true;
}

void Point::ShowPosition() {
   cout<<x<<" "<<y<<endl;
}

int main(void) {
   Point p;
   if(!p.InitMembers(-2, 4)) {
      cout<<"초기화 실패"<<endl;
   }
   if(!p.InitMembers(2, 4)) {
      cout<<"초기화 실패"<<endl;
   }
   p.ShowPosition();
   return 0;
}