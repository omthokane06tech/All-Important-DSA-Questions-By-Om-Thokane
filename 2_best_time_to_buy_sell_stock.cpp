#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &arr){
    int bestbuy = arr[0];   // firstly bestbuy is assign to a first index of array
    int maxpro =0;  // maxprofit is initially 0
    

    for(int i=0;i<arr.size();i++){     // for loop for traversing the array to determine bestbuy and maxprofit
        bestbuy = min(bestbuy,arr[i]);
        maxpro = max(maxpro,arr[i]-bestbuy);

    }
    
    cout<<"The bestBuy for stock price is : "<<bestbuy;
    cout<<endl;
    return maxpro;
} 

int main(){
    vector<int> arr={8,1,2,3,4,9};
    int maxpro = maxProfit(arr);
    cout<<"The maxprofit after Buying the Stock at Bestbuy  : "<<maxpro;
}
