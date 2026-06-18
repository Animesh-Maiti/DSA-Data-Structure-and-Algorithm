#include<iostream>
#include<math.h>
using namespace std;

int main(){
    cout<<"enter a number: ";
    int n ;
    cin>>n;
    bool isPrime=true;


    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<endl;
            isPrime=false;
            break;
        }
        
    }
    if(isPrime==true){
        cout<<"its a prime number.";
    }
    else{
        cout<<"not prime";
    }
    

    return 0;
}