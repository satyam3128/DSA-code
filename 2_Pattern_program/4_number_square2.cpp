#include<iostream>
using namespace std;
int main(){
    int c,r;
    cout<<"Enter the Row:";
    cin>>r;
    cout<<"Enter the Column:";
    cin>>c;
    for(int i = 1 ;i<=r ;i++){
        
        for(int j = 1 ;j<=c ;j++){
            cout<<i<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}