#include<iostream>
#include<vector>
using namespace std;

// kadanes algorithm is used to print the maximum subarray sum

int max_subarry(vector<int>&arr){
    int currsum =0;
    int maxsum = INT16_MIN;

    for(int val:arr){
        currsum = currsum + val;
        maxsum = max(currsum,maxsum);

        // this is only important part of kadanes algo
        // if we get the currsum negative then we know it is not include in maxsum
        // hence we reinitialized to 0

        if(currsum < 0){
            currsum = 0;  // reinitialized to 0

        }


    }
    return maxsum;
}



int main(){
    vector<int> arr={2,3,4,5,-2,4,5};
    vector<int> arr1={2,3,0,1,-4,7,-3};
    int print = max_subarry(arr);
    int print1 = max_subarry(arr1);
    cout<< print<<endl;
    cout<<print1;

}