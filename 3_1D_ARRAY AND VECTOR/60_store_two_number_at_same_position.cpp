#include <iostream>
using namespace std;
int main(){
    cout<<"\nEnter the number between 1 to 99 and its occurance: \n";
    int num,occur;
    cout<<"Enter the Number:";
    cin>>num;
    cout<<"Enter the Occurance:";
    cin>>occur;

    int single_varible;
    single_varible = num + occur * 100;
    cout<<"\nNumber:"<<single_varible % 100;
    cout<<"\nOccurance:"<<single_varible /100;

    


    return 0;
}