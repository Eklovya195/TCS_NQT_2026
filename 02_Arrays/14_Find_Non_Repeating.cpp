#include <bits/stdc++.h>
using namespace std;

void FindNonRepeatingElements(vector<int> &arr,int n){
    unordered_map<int,int> mpp;
    for(auto i:arr) ++mpp[i];

    for(auto it:mpp){
        if(it.second == 1){
            cout << it.first << " ";
        }
    } 
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    FindNonRepeatingElements(arr,n);
    return 0;
}