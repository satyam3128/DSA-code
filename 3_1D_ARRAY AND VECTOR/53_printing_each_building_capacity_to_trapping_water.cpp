#include <iostream>
#include<vector>
using namespace std;
void each_building_capacity(vector<int>height){
    int n = height.size();
    vector<int>leftmax(n);
    vector<int>rightmax(n);
    leftmax[0] = 0;
    rightmax[n-1] = 0;
    // maintain Left Max Building  height of Each building
    for(int i = 1;i<n ;i++) {
        leftmax[i] = max(leftmax[i-1] , height[i-1]);
    }
    for(int i = n-2 ;i>=0 ;i--){
        rightmax[i] = max(rightmax[i+1] , height[i+1]);
    }

    cout<<"\nLeftMaximum Building height of Each Building:\n";

    for(int i = 0;i< n;i++){
        cout<<leftmax[i]<<" ";
    }
    
    cout<<"\nRightMaximum Building height of Each Building:\n";
     for(int i = 0;i< n;i++){
        cout<<rightmax[i]<<" ";
    }

    vector<int>water(n);


    for(int i = 0;i<n ;i++){
        int minheight = min(leftmax[i] , rightmax[i]);
        if(minheight - height[i] >=0){
            water[i] = minheight-height[i];
        }
        else if(leftmax[i] - rightmax[i] <0){
            water[i] = 0;
        }


    }
    
    cout<<"\nCapacity to store water of Each Building :-\n";
    int total_water = 0;
    for(int i  =0;i< n ;i++){
        cout<<water[i]<<" ";
        total_water +=water[i];
    }
    cout<<"\nTotal Water stored in on Building is :"<<total_water;
    

}
int main(){
    int n ;
    cout<<"Enter the Number of Building:";
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n ;i++){
        cout<<"Enter the "<<i<<" Height of Building:";
        cin>>v[i];
    }
    cout<<"\nHeights of Building:\n";
    for(int i = 0;i<n ;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    each_building_capacity(v);


    return 0;

}