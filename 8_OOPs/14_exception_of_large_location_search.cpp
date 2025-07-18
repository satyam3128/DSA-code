#include<iostream>
using namespace std;
int main(){
    try{
        int *p = new int[1000000000000000];
        cout<<"Memory allocation is Successfully\n";
        delete []p;
    }
    catch(const exception &e){
        cout<<"Exception occured due to line 5:"<<e.what()<<endl;
    }

 
    return 0;
}