#include<iostream>
using namespace std;
int main(){
    int row, column;
    cout<<"Enter Row:";
    cin>>row;
    cout<<"Enter Colum:";
    cin>>column;
    for(int i = 1 ;i<=row ;i++){
        for(int j = 1 ;j<=2*column-1 ;j++){
            if(i+j == row +1 || j-i == row -1 ){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<"\n";
    }

    for(int i =  1 ;i<=2*row-1 ; i++){
        for(int j = 1 ;j<=2*column-1 ;j++){
            if(i==1 || j==1 ||i==2*row-1 || j==2*column-1 ){
                cout<<" * ";
            }
            else if(i>=row ){
                if( j == column-1/2 + 1 || j == column-1/2 -1 || (i == row && j == column )){
                    cout<<" * ";
                }
                else{
                    cout<<"   ";
                }
            }
            
            else{
                cout<<"   ";
            }

        }
        cout<<"\n";
    }


    return 0;
}