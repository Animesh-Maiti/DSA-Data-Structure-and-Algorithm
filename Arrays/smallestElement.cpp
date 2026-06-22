#include<iostream>
#include<climits>
using namespace std;


int main(){

    int arr[]={7,8,1,5};
    int smallest = INT_MAX;

    for(int i=0; i<4;i++){
        smallest = min(smallest,arr[i]);
    }

    cout<<"smalesst number ="<<smallest<<endl;

    return 0;
}