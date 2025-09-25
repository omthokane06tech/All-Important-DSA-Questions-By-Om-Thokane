#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

int findDuplicate(vector<int> & nums){
    
        unordered_set<int>s;
        for(int val : nums){  // for each loop is use due to vector
            if(s.find(val) != s.end()){  // we get value in array so return that value
                return val;
            }
            s.insert(val);
        }
        return -1;
}
int main(){
    vector<int> nums ={1,2,3,4,5,2,6};
    vector<int> nums1 ={ 3,3,3,3,3};
    int duplicate = findDuplicate(nums);
    cout<<" The Duplicate value in this vector is  : ";
    cout<<duplicate<<endl;
    int duplicate1 = findDuplicate(nums1);
    cout<<" The Duplicate value in this vector is  : ";
    cout<<duplicate1;
}