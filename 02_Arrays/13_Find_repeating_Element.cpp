#include <bits/stdc++.h>
using namespace std;

void FindRepeatingElements(vector<int> &arr,int n){
    unordered_map<int,int> mpp;
    for(auto i:arr) ++mpp[i];

    for(auto it:mpp){
        if(it.second > 1){
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

    FindRepeatingElements(arr,n);
    return 0;
}