#include<iostream>
using namespace std;
int b2d(int num){
    int temp = num,pow=1,ans=0;
    while(temp>0){
        int digit=temp%10;
        ans=(digit*pow)+ans;
        pow = pow*2;
        temp = temp/10;
    }
    return ans;
}

int main(){
    int a = 1010;
    cout<<b2d(a);

    return 0;
}