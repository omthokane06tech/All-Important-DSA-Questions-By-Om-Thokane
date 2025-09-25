#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);  // for same size of vector for array and ans
        int result = 1;        // result initialized
        int zerocount = 0;

        
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                zerocount++;
                continue;
            }
            result = result * nums[i];
        
        }
        if(zerocount > 1 ){  // if 2 zeros then it makes 0 to another so final answer is 0 
            return ans;

        }
        for(int i=0;i<n;i++){
            if(zerocount == 0){  // here zeocount == 0 hence it can handel
                ans[i] = result / nums[i];
            }
            else{  // here perfectly the zerocount == 1 so we need to return the result except 0 hance ans is other than 0
                if(nums[i] == 0){
                    ans[i] = result;  // in result multiplying the all elements of array except 0
                                     // on that same index we assign our result.
                }
                else{
                    ans[i] = 0;
                }

            }
        }
        return ans;
    }   
int main(){
    vector<int> nums={1,2,3,4};
    vector<int>nums1 = {-1,1,0,3,-3};
    vector<int> result = productExceptSelf(nums);
    vector<int>result1 = productExceptSelf(nums1);

    cout<<"result for nums is : ";
    for(int val:result){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"result for nums1 is : ";
    for(int val:result1){
        cout<<val<<" ";
    }
    cout<<endl;
}
