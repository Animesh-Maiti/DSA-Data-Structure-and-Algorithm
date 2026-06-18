#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
   /* cout<<" enter colmn : ";
    cin>>m;
*/
    for(int i=1; i<=n; i++){

        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        for(int k=1; k<=((2*(n-i))-1);k++)
        {
            cout<<" ";
        }       
        
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=0; i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        

        for(int l=(i*2)-1; l>=1 ;l--){
            cout<<" ";

        }
        for(int l=n; l>i; l--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}