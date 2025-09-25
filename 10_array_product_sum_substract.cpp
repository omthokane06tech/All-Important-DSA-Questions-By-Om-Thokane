#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int product_sum(vector<int>nums){
    int sum =0;
    int product = 1;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        product *= nums[i];

    }
    int result = product - sum;
    return result;
   
}
int main(){
    vector<int>nums={1,2,3,4};
    vector<int>nums1 ={1,2,3,3,2};
    int print = product_sum(nums);
    cout<<" The Product - Sum is equal to : "<<print<<endl;
    int print1 = product_sum(nums1);
    cout<<" The Product - Sum is equal to : "<<print1;
}