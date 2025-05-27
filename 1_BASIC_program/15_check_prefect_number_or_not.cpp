#include <iostream>
using namespace std;
bool perfect(int num){
    int orig  =num ;
    int sum =  0;
    for(int i = 1 ;i<num ;i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum  == orig) {
        return 1;
    }
    return 0;
}
int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    if(perfect(num)){
        cout<<num<<" is a perfect number";

    }
    else{
        cout<<num<<" is not a perfect number";
    }

    return 0;
}