#include<iostream>
using namespace std;
int pallindrome_number_checking(int num){
    int orig = num;
    int rem, ans = 0;
    while(orig){
        rem = orig %10;
        orig = orig /10;
        ans = ans*10 + rem;
<<<<<<< HEAD

=======
>>>>>>> a4e5471 (commit pallindrome number checking)
    }
    if(ans == num){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the Number:";
    cin>>n;
<<<<<<< HEAD
    cout<<"Is "<<n<<" a Pallindrome Number : "<<pallindrome_number_checking(n);

=======
    
    cout<<"Is "<<n<<" a Pallindrome Number : "<<pallindrome_number_checking(n);
 
>>>>>>> a4e5471 (commit pallindrome number checking)
    return 0;
}