#include<iostream>
#include<vector>
using namespace std;
void odd_even_betweeen_two_number(int a , int b){
    vector<int>odd;
    vector<int>even;
    for(int i = a+1 ; i < b ;i++){
        if(i%2==0){
            even.push_back(i);
        }
        else{
            odd.push_back(i);
        }
    }
    cout<<"\nEVEN NUMBER:";
    for(int j = 0;j != even.size() ;j++){
        cout<<even[j]<<" ";
    }
    cout<<"\nODD NUMBER:";
    for(int k = 0;k != odd.size() ; k++){
        cout<<odd[k]<<" ";
    }
}
int main(){
    int a,b;
    cout<<"Enter the First Number:";
    cin>>a;
    cout<<"Enter the Last Number:";
    cin>>b;
    odd_even_betweeen_two_number(a,b);

    return 0;
}