// array initialisation

#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5,}; // first way

    int arr2[]={6,7,8,9}; // second way

    int size=10;

    // using array index

    int arr3[size];
    for (int i=0;i<=9;i++){
        arr3[i]=i;
    }
    for(int i =0;i<sizeof(arr3)/sizeof(int);i++){
        cout<<arr3[i]<<endl;
    }
    
    return 0;
}