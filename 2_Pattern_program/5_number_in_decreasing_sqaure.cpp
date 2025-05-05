#include<iostream>
using namespace std;
int main(){
    int c,r;
    cout<<"Enter the Row:";
    cin>>r;
    cout<<"Enter the Column:";
    cin>>c;
    for(int i = 1 ;i<=r ;i++){
        
        for(int j = c ;j>=1 ;j--){
            cout<<j<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}