#include <iostream>
#include<algorithm>
using namespace std;
string add(string num1 , string num2){
    int index1  = num1.size()-1;
    int index2 = num2.size()-1;
    int sum , carry = 0;
    string ans;
    while(index2 >=0){
        sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
        carry = sum /10;
        char ch = '0' + sum % 10;
        ans += ch ;
        index1--;
        index2--;
    }
    while(index1 >= 0){
        sum = (num1[index1] -'0') + carry;
        carry = sum /10;
        char ch = '0' + sum % 10;
        ans +=ch;
        index1--;

    }
    if(carry){
        ans +='1';

    }
    reverse(ans.begin(),ans.end());

    return ans;
}

int main(){
    string num1,num2;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;

    if(num1.size() < num2.size()){
        cout<<"SUM:"<<add(num2 , num1);

    }
    else{
        cout<<"SUM:"<<add(num1,num2);
    }


    return 0;
}