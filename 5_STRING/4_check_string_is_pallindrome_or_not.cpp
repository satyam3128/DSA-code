#include <iostream>
using namespace std;
int main(){
    string ch;
    cout<<"Enter the string:";
    getline(cin,ch);

    int start = 0;
    int end = ch.size()-1;
    while(start<end){
        if(ch[start] != ch[end]){
            cout<<ch<<" is not a pallindrom";
            return 0;
        
        }
        start++;
        end--;
        

    }
    cout<<ch<<" is pallindrom";

    return 0;
}