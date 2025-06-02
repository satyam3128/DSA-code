#include <iostream>
using namespace std;
bool vowel(char &ch){
    if(ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U'  ) return 1;
    return 0;
}
int main(){
    string s;
    cout<<" Enter the String:";
    getline(cin,s);
    int start = 0 ;
    int end = s.size()-1;
    while(start<end){
        if(!(vowel(s[start]))) start++;
        else if(!(vowel(s[end]))) end--;
        else{
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
    cout<<"String after reverse the vowel:";
    cout<<s;

    return 0;

}