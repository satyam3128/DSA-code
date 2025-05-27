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
void perfect_number_between_two(int a , int b){
    for(int i = a+1 ; i<b ;i++){
        if(perfect(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int num1 , num2 ;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    cout<<"perfect number between "<<num1<<" and "<<num2<<endl;
    perfect_number_between_two(num1,num2);
    

    return 0;
}