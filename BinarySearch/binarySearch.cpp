// binary search 
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(int target, vector<int> arr){
    int st=0, ed=arr.size()-1;
    while(st<=ed){
        int mid=(st+ed)/2;
        if(target<arr[mid]){
            ed=mid-1;

        }
        else if(target>arr[mid]){
            st = mid+1;
        }
        else if(target==arr[mid]){
            cout<< arr.at(mid) << " found at index: "<<mid<<endl;
            return mid;
        }

    }
    return -1;
}

int main(){
    vector<int> arr={10,20,30,40,50};
    int target1= 50;

    vector<int> arr2={1,35,35,66,83,98,100,201};
    int tar=35;

    cout<< binarySearch(target1,arr)<< endl;
    cout<< binarySearch(tar,arr2)<< endl;

    return 0;
}
