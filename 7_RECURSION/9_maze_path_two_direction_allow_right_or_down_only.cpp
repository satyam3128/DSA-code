// Condition:
// 1: only Right and down Direction allowed to move 
// 2:Find all The possible ways 

#include<iostream>
using namespace std;
int maze_path(int start_row , int start_col ,  int end_row , int end_col){
    
    if(start_row > end_row  || start_col >end_col) return 0;

    if(start_row == end_row && start_col == end_col) return 1;
    // if first move to right side
    int rightways = maze_path(start_row , start_col+1 ,end_row ,end_col);
    // if first move to down side

    int downways = maze_path(start_row +1 , start_col ,end_row,end_col);

    return rightways + downways;
}



// printing all possible path
void print_path(int start_row , int start_col ,  int end_row , int end_col , string ans){
    if(start_row > end_row  || start_col >end_col) return ;

    // destination reached
    if(start_row == end_row && start_col == end_col) {
        cout<<ans<<endl;
        return;
    }

    // right side
    print_path(start_row , start_col+1 ,end_row ,end_col , ans +'R');

    // down side

     print_path(start_row +1 , start_col ,end_row,end_col , ans + 'D');

    
}



int main(){

    int start_row;
    int start_col;
    int final_row;
    int final_col;

    cout<<"Enter intial Position Row:";
    cin>>start_row;
    cout<<"Enter intial Position col:";
    cin>>start_col;
    cout<<"Enter final Destination Row:";
    cin>>final_row;
    cout<<"Enter final Destination col:";
    cin>>final_col;

    cout<<"TOTAL WAYS :"<<maze_path(start_row , start_col,final_row,final_col );

    cout<<endl;

    string ans;
    cout<<"Possible Direction:\n";
    print_path(start_row , start_col,final_row,final_col,ans);

    return 0;
}