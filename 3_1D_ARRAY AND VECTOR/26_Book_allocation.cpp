#include<iostream>
#include<vector>
using namespace std;
bool ispossible(vector<int>arr,int n , int m , int mid){
    int student_count = 1;
    int pagesum =0;
    for(int i = 0;i<n ;i++){
        if(pagesum + arr[i] <= mid){
            pagesum +=arr[i];
        }
        else{
            student_count++;
            if(student_count>m || arr[i] > mid){
                return false;
            }
            
            pagesum = arr[i];
        }
    }
    return true;

}
int allocation(vector<int>arr, int n , int m){
    int start = 0;
    int sum = 0 , mid , ans = -1;
    for(int i = 0;i<n ;i++){
        sum = sum + arr[i];
    }
    int end = sum ;
    while(start<=end){
        mid = start + (end - start)/2;
         if(ispossible(arr,n,m,mid)){
            ans = mid;
            end = mid -1;
         }
         else{
            start = mid +1;

         }
    }
    return ans ;
}

int main(){
    vector<int>v;
    int n ;
    cout<<"Enter the size of Vector:";
    cin>>n;
    int numbl;
    for(int i = 0;i<n ;i++){
        
        cout<<"Enter "<<i<<" element of Array:";
        cin>>numbl;
        v.push_back(numbl);
    }
    cout<<"\nArray:-\n";
    for(int i = 0;i<n ;i++){
        cout<<v[i]<<" ";
    }
    int student ;
    cout<<"\nEnter the Number of student:";
    cin>>student;

    
    cout<<allocation(v , n , student);


    


    return 0;
}