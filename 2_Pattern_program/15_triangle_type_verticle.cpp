#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number :";
    cin>>num;
    for(int i = 1 ;i<=num;i++){
        // space printing
        for(int j = 1 ;j<=num-i;j++){
            cout<<" ";
        }
        // star printing 
        for(int k = 1 ;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 1 ;i<=num;i++){
        // space printing
        for(int j = 1 ;j<=i;j++){
            cout<<" ";
        }
        // star printing
        for(int k = 1 ;k<=num-i;k++){
            cout<<"*";

        }
        cout<<endl;
    }

    return 0;
}