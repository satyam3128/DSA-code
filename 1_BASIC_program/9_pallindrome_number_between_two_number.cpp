#include<iostream>
using namespace std;
int pallindrome_number_checking(int num){
    int orig = num;
    int rem, ans = 0;
    while(orig){
        rem = orig %10;
        orig = orig /10;
        ans = ans*10 + rem;
    }
    if(ans == num){
        return 1;
    }
    return 0;
}
void pallindrome_number_between_two(int a , int b){
    for(int i = a+1 ; i<b ;i++){
        if(pallindrome_number_checking(i)){
            cout<<i<<" ";
        }
        

    }
}
int main(){
    int a,b;
    cout<<"Enter the First number:";
    cin>>a;
    cout<<"Enter the Second Number:";
    cin>>b;
    
   cout<<"\nPallindrome Numbers Are:-\n";
   pallindrome_number_between_two(a,b);
 
    return 0;
}