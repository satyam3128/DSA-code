#include<iostream>
using namespace std;
int main(){

    string s;
    cout<<"Enter the string:";
    getline(cin,s);
    int length = s.size();
    int start  = 0;
    int end = (length/2)-1;
    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<endl<<"Reversed string:"<<s;

    return 0;
}