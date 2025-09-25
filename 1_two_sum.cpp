#include<iostream>
#include<vector>
using namespace std;

vector<int> twosum(int n ,vector<int>&arr,int target){
    vector<int>ans;


    for(int i=0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i] + arr[j] == target){
              ans.push_back(i);
              ans.push_back(j);
              return ans;
            
            }
        }
    }
   return {-1,-1};
}
int main(){
    int n = 5;
    vector<int> arr={2,3,4,6,8};
    int target = 14;
    vector<int> ans1 =twosum(n,arr,target);
    cout<<"The index of two numbers having sum is equal to the Target is : "<<ans1[0]<<","<<ans1[1];
}