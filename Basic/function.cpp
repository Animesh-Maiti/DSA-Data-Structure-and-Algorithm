#include<iostream>
using namespace std;


int minimun(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }

}

int factorial(int n){
    int fact = 1;

    for (int i=1; i<=n; i++){
        fact*=i;
        

    }
    return fact;
}

int digit_sum(int a){
    int i,digit,sum=0;
    int temp=a;
    while(temp >0){
        digit = temp%10;
        sum=sum+digit;
        temp = temp/10;

    }
    return sum;
}

int nCr(int a, int b){
    return factorial(a)/(factorial(b) * factorial(a-b));
}

int main(){

    int a=5,b=2;
    cout<<nCr(a,b)<<" is the factorial \n";

    return 0;

}