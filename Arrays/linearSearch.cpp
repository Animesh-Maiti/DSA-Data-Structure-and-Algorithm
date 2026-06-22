#include<iostream>

using namespace std;
int linearSearch(int arr[],int target){
        for(int i=0;i<6;i++){

            if (arr[i]==target){
                cout<<"found at index:  "<<i<<endl;
                return i;
            }     
        }
        return -1;
    }

int main(){
    int arr[]={1,5,8,23,0,12};
    int target =0;
    bool found=true;
    linearSearch(arr,target);

    return 0;
}