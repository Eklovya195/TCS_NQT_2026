#include <bits/stdc++.h>
using namespace std;

void Average(vector<int> &arr, int n){
    double sum = 0;
    for(int i=0;i<n;i++){
        sum += (double)arr[i];
    }
    double avg = sum/n;
    cout << avg;
}

int main(){
    int n = 5;
    vector<int> arr;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    Average(arr, n);
    return 0;
}