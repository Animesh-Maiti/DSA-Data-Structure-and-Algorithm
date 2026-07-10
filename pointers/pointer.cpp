// Basics of pointer

#include <iostream>
using namespace std;
int main(){

    int a=10;
    //syntax of a pointer
    int* ptr=&a;

    //syntax of double pointer
    int** ptr2= &ptr;

    //datatype of pointer and variable must be same
    cout<< "value of a " << a << endl;
    cout << "value of ptr " << ptr << endl;
    cout<< "address of a " << &a << endl;
    cout<< "value  of ptr2 "<< ptr2 << endl;
    cout<< "address of ptr " << &ptr << endl;;

    //derefrance operator "*". value at address

    cout << "dereference &a = " << *(&a) << endl;
    cout << "dereference ptr " << *ptr << endl;

    // null pointer syntax
    int* ptr3 = NULL;



    return 0;
}