#include<iostream>
using namespace std;
int main(){
    char name = 'a';

    char *ptr = &name;
    cout<<(void*)ptr<<endl;

    return 0;
}