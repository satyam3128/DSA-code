// Here Final destination at fixed corner 1,1 
// here starting index if in decreasing order 
// Destination = 1,1
// Starting  = row , col

#include<iostream>
using namespace std;
int maze(int row , int col){
    if(row <1 || col <1) return 0;
    if(row == 1 && col == 1) return 1;
    int rightway = maze(row , col-1);
    int colways = maze(row-1,col);
    return rightway+colways;
}
void maze_path(int row ,  int col , string a){
    if(row <1 || col <1) return ;
    if(row == 1 && col == 1) {
        cout<<a<<endl;
        return ;
    }
    // RIGHT WAYS
    maze_path(row , col-1 , a +'R');
    // DOWN WAYS
    maze_path(row-1,col, a + 'D');
    

}
int main(){
    int row, col;
    cout<<"\nEnter the size of Maze:\n";
    cout<<"Enter the Row:";
    cin>>row;
    cout<<"Enter the col:";
    cin>>col;

    cout<<"Total Ways: "<<maze(row,col);
    cout<<endl;
    cout<<"Possible Direction:\n";

    maze_path(row,col,"");

    

    

    return 0;
}