#include <iostream>
using namespace std;
int main(){
    int num ;
    cout<<"Enter the number:";
    cin>>num;
    for(int i = 1 ;i<= num ;i++){
        for(int j = 1 ;j<= num ;j++){
            for(int k = 1 ;k<=num ;k++){
                cout<<" * ";
            }
            cout<<"   ";
        }
        cout<<endl;
    }

    return 0;

}