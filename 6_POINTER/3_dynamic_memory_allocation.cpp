#include<iostream>
using namespace std;
int main(){
    int *ptr = new int;
    float *ptr1 = new float;

    *ptr1 = 99.8;
    *ptr = 90;

    int *p1 = new int[20];


    int n ;
    cout<<"Enter the Size of Array:";
    cin>>n;

    int *p2 = new int[n];
    for(int i = 0;i<n ;i++){
        cout<<"Enter the Element:";
        cin>>p2[i];
    }

    for(int i = 0;i<n ;i++){
        cout<<p2[i]<<" ";
    }
    cout<<endl<<*ptr<<endl;
    cout<<*ptr1<<endl;
    delete ptr1;
    delete ptr;
    delete []p1;
    delete []p2;


    return 0;

}