#include <iostream>
using namespace std;

int d2b(int num){
    int ans= 0;
    int pow=1, temp=num;
    while(temp>0){
        int digit=temp%2;
        ans=(digit*pow)+ans;
        pow=pow*10;
        temp=temp/2;

    }
    return ans;
}

int main(){

    for(int i=1;i<11;i++){
        cout<<d2b(i)<<endl;
    }

    return 0;
}