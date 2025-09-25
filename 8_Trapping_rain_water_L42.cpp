#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int trapwater(vector<int>&nums){
    int n = nums.size();
    int ans =0;
    int l =0;
    int r =n-1;
    int lmax =0;
    int rmax =0;

    while(l < r){
        lmax = max(lmax,nums[l]);  // max of left side while traversing
        rmax = max(rmax,nums[r]);  // max of right side while traversing

        if(lmax < rmax){
        ans = ans + lmax-nums[l];
        l++;  // slide left pointer to right from 0 to n 
        }
        else{
        ans = ans + rmax-nums[r];
        r--;  // Slide right pointer to the left from n-1 to 0
        }
        
    }
    return ans;  // returning the final answer that total water store
}
int main(){
    vector<int> nums ={0,1,0,2,1,0,1,3,2,1,2,1};  // the values in vector behave like pole (height) to store water
    int maxwater = trapwater(nums);
    cout<<"Maximum water store by the poles is : ";
    cout<< maxwater;
}