#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums ={2,7,11,15};
    int target =18,i=0,j=nums.size()-1,ps;

    while(i<j){
        ps=nums[i]+nums[j];
        if(ps<target){
            i++;
        }
        if(ps>target){
            j--;
        }
        if(ps==target){
            cout<<"target found "<<nums[i]<<"and"<<nums[j]<<endl;
            break;
        }

    }

    return 0;
}