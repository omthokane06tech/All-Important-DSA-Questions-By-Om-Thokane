#include<iostream>
#include<vector>
using namespace std;

int reverse(vector<int> &arr){
    int i=0;
    int j=arr.size()-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    vector<int> arr ={1,2,3,4,5,6,7};
    reverse(arr);

}