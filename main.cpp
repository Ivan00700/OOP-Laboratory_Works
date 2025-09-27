#include <iostream>
#include "grow.h"

// using namespace std;

int main() {
    
    long long UpSpeed, DownSpeed, desiredHeight, realHeight = 0, day = 0, night = 0;
    std::cin>>UpSpeed>>DownSpeed>>desiredHeight;
    
    Laba_01 res = Plant(UpSpeed, DownSpeed, desiredHeight);

    std::cout<<"Days needed: "<<res.day<<"\n"<<"Nights needed: "<<res.night<<"\n"<<"Total height: "<<res.realHeight;

    return 0;
}
