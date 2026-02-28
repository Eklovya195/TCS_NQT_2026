#include <bits/stdc++.h>
using namespace std;

void SumArray(vector<int> &arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout <<  sum;
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

    SumArray(arr,n);
    return 0;
}