#include<iostream>
#include<climits>
using namespace std;


int main(){

    int arr[]={7,8,1,5};
    int smallest = INT_MAX,index;

    for(int i=0; i<4;i++){
        if (smallest>arr[i]){
            smallest = arr[i];
            index=i;
        }
    }

    cout<<"smalesst number ="<<smallest<<" index =" <<index<<endl;

    return 0;
}