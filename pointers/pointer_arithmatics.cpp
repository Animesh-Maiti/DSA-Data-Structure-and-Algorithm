// we will do pointer arithmatics 

#include<iostream>
using namespace std;

int main(){
    // array is a kind of pointer that stores the address of its first element;
    int arr[]={10,20,30,40};

    int* ptr= arr;

    cout << " value of ptr "<< ptr << endl;
    cout << " value of *ptr "<< *ptr << endl;
    cout << " first element of array "<< arr[0] << endl;

    // pointer arithmatics 
    //increment and decrement

    cout<< " pointre increment ptr++ "<< *(++ptr) << endl; // increas by the size of datatype.
    cout << " pointer decrement ptr-- "<< ptr-- <<endl;

    // add and substract

    cout << " ptr + 2 = " << *(ptr+2)<< endl; // should give 3rd element of arr, incres by n*datatype size
    cout << " ptr-1 = " << *(ptr-1) << endl;

    // pointer - pointer

    int a =10;
    int b=20;

    int* ptr1= &a;
    int* ptr2 = &b;

    cout<< (" ptr1 - ptr2 ")<< ptr1-ptr2 << endl;

    // we can also use relational operator ( ==, <,>,<=,>=,!=)

    cout<< ( " ptr1 < ptr2 ")<< (ptr1 < ptr2) <<endl;


    return 0;


}