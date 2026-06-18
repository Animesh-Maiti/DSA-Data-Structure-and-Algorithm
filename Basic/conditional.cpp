#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<<"enter your charector: ";
    cin>> ch;

    if('A'<=ch && ch<='Z'){
        cout<< "upper case "<<(int)ch;
    }
    else if('a'<=ch && ch<='z'){
        cout<<"lower case " <<(int)ch;
    }
    else{
        cout<<" not an alphabet "<<(int)ch;
    }
    return 0;
}