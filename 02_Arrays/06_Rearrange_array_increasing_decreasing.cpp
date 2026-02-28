#include <bits/stdc++.h>
using namespace std;

void Rearrange(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    reverse(arr.begin() + n/2,arr.end());
}

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    Rearrange(arr,n);

    for (int x : arr) cout << x << " ";
    return 0;
}