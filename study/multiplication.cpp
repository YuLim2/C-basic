#include <iostream>

int main(){
    int n;
    std::cin>>n;
    for(int i=0; i<10; i++){
        std::cout<<'i *'<<n<<i*n<<std::endl;
    }
    return 0;
}