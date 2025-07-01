// A neon number is a number where the sum of digits of the square of the number is equal to the number. The task is to check and print neon numbers in a range.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int square = num * num;
    int sum = 0;
    while(square){
        sum += square % 10;
        square /=10;
    }
    if(sum == num){
        cout<<num<<" is neon number";
    }
    else{
        cout<<num<< " is not a neon number";
    }

    return 0;
}