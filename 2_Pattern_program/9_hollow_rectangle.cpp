#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout<<"Enter the Row:";
    cin>>row;
    cout<<"Enter the column:";
    cin>>col;
    for(int i = 1 ;i<= row ;i++){
        for(int j = 1 ;j<=col; j++){
            if(i == 1 || i == row || j == 1 || j== col){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }

    return 0;
}