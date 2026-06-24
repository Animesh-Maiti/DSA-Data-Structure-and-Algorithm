#include<iostream>
using namespace std;

int main(){

    int arr[]={-4,-1,-5,-6};
    int cursum=0, maxsum=arr[0];

    for(int st=0;st<4;st++){
        cursum+=arr[st];
        maxsum = max(cursum,maxsum);
        if(cursum<0){
            cursum=0;
        }
        
    }
    cout<<maxsum;

    return 0;
}