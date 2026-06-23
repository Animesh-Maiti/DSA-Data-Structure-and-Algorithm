#include<iostream>
#include<vector>
using namespace std;

int main(){
    // diff ways to initialise vector

    vector<int>vec1;

    vector<int>vec2={1,2,3,4};

    vector<int>vec3(3,0);

    vector<int>vec4(4);


    //loops in vector for each loop
    for(int val:vec2){
        cout<<val<<" ";
    }
    cout<<endl;

    // vector functions 

    int size = vec3.size();
    vec3.push_back(1);
    vec3.push_back(2);
    vec3.pop_back();
    int front = vec3.front();
    int back  =vec3.back();
    int a= vec3.at(2);
    int capacity = vec3.capacity();
    int size2 = vec3.size();

    cout<<size<<endl<<front<<endl<<back<<endl<<a<<endl<<capacity<<endl<<size2<<endl;

    for(int val:vec3){
        cout<<val<<" ";
    }


    return 0;
}