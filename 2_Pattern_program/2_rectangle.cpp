#include<iostream>
using namespace std;
int main(){
    int length , breadth;
    cout<<"Enter The lenght of Rectangle:";
    cin>>length;
    cout<<"Enter the Breadth of Rectangle:";
    cin>>breadth;
    
    for(int i = 1 ;i<=breadth ;i++){
        for(int j = 1 ;j<=length ;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
    return 0;
}