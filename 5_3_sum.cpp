#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threesum(vector<int>&nums){
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(),nums.end());

    for(int i=0;i<n;i++){
        if(i>0 && nums[i] == nums[i-1]){  // Avoiding Duplication of i in array corner case
            continue;
        }
        int j = i+1;
        int k = n-1;

        while(j<k){
            int sum = (nums[i] + nums[j] + nums[k]);
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                ans.push_back({nums[i],nums[j],nums[k]});  // we are getting sum is equal to 0
                j++;
                k--;

                while(j<k && nums[j] == nums[j-1]){ // to avoid Duplication of j
                    j++;

                }
                while(j<k && nums[k] == nums[k-1]){
                    k--;
                }
            }
        }
        
    }
    return ans;
}
int main(){

    vector<int>nums={-1,0,1,2,-1,4};
    vector<vector<int>> result = threesum(nums);

    cout << "Triplets with sum = 0 are:\n";
    for(auto triplet : result) {  // all result should be print here
        cout << "[ ";  // auto is used because the compiler automatically deduce the type according to context

        for(int num : triplet) {  // single triplets with sum = 0 
            cout << num << " ";   // for each loop is used to print num 
        }
        cout << "]\n";
    }

    return 0;
}