#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<int>& vec, int k) {
    reverse(vec.begin(),vec.end());
    k=k%vec.size();
    reverse(vec.begin(),vec.begin()+k);
    reverse(vec.begin()+k,vec.end());
}

int main(){
    vector<int> vec ={1,2,3,4,5,6,7};
    int k = 3;
    vector<int> vec1={3,6,9,12,15,18};
    int k1 = 2;

    rotate(vec,k);
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    rotate(vec1,k1);
    for(int val:vec1){
        cout<<val<<" ";
    }

}