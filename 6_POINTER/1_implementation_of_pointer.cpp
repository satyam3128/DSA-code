#include<iostream>
using namespace std;
int main(){

    int arr[5] = { 10,20,30,49,50,};
    int *ptr = arr;
    for(int i = 0;i<5 ;i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;

    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;

    for(int i = 0;i<5 ;i++){
        cout<<ptr+i<<endl;
    }
    for(int i = 0;i<5 ;i++){
        cout<<ptr[i]<<endl;
    }



    return 0;
}