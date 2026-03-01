#include <bits/stdc++.h>
using namespace std;

int RemoveDuplicates(vector<int> &arr,int n){
    if(arr.empty()) return 0;
    sort(arr.begin(),arr.end()); //used if array is not sorted

    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k = RemoveDuplicates(arr,n);
    for(int i = 0; i < k; i++){
        cout << arr[i]  << " ";
    }

    return 0;
}