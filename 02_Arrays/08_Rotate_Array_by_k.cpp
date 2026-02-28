#include <bits/stdc++.h>
using namespace std;

void RotateByK(vector<int> &arr, int K){

    int n = arr.size();
    K = K % n;   // Important step

    //Left Rotate
    reverse(arr.begin(), arr.begin() + K);
    reverse(arr.begin() + K, arr.end());
    reverse(arr.begin(), arr.end());

    //Right Rotate
    // reverse(arr.begin(), arr.end());
    // reverse(arr.begin(), arr.begin() + K);
    // reverse(arr.begin() + K, arr.end());
}

int main(){
    int n = 5;
    int K = 3;

    vector<int> arr;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    RotateByK(arr, K);

    for (int x : arr)
        cout << x << " ";

    return 0;
}