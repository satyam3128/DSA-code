#include <iostream>
using namespace std;
void even_number(int n){
    if(n<0) return ;
    cout<<n<<" ";
    even_number(n-2); 
}

int main(){
    int n;
    cout<<"Enter the even number:";
    cin>>n;
    even_number(n);
    return 0;
}