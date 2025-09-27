#include "grow.h"

Laba_01 Plant(long long UpSpeed, long long DownSpeed, long long desiredHeight) {
    Laba_01 ans;

    if (UpSpeed >= desiredHeight) {
        ++ans.day;
        ans.realHeight += UpSpeed;
        return ans;
    }
    if (UpSpeed <= 0){return ans;}

    while(ans.realHeight < desiredHeight){
        ans.realHeight += UpSpeed;
        ++ans.day;
        if(ans.realHeight >= desiredHeight) {break;}
        ans.realHeight -= DownSpeed;
        ++ans.night;
    }
    return ans;
}