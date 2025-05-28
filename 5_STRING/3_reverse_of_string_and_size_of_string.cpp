#include <iostream>
#include <string>
using namespace std;
int main(){
    string name = "SATYAM SUMAN";
    int start = 0 ;
    int end = name.size()-1;
    while(start<end){
        swap(name[start] , name[end]);
        start++;
        end--;
    }
    cout<<name;

    int size = 0;
    while(name[size] != '\0'){
        size++;

    }
    cout<<"\nSize :"<<size;

    return 0;



}