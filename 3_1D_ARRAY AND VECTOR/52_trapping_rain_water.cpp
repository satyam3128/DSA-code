#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int total_water_store(vector<int>height){
    int n = height.size();
    int leftmax[n] , rightmax[n];
    leftmax[0] = 0;
    rightmax[n-1] = 0;
    for(int i = 1 ;i<n ;i++){
        leftmax[i] = max(leftmax[i-1] , height[i-1]);
    }
    for(int i = n-2 ;i>=0 ;i--){
        rightmax[i] = max(rightmax[i+1] , height[i+1]);
    }
    int water = 0;
    for(int i = 0;i<n ;i++){
        int minheight = min(leftmax[i] , rightmax[i]);
        if(minheight - height[i] >= 0){
            water += minheight-height[i];
        }
    }
    return water;

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
    cout<<"Total Water can be Stored:"<<total_water_store(v);

    

    return 0;
}