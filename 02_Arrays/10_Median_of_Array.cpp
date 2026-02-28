#include <bits/stdc++.h>
using namespace std;

double Median(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());

    if(n % 2 == 0){
        return (arr[n/2] + arr[n/2 - 1]) / 2.0;
    }
    else{
        return arr[n/2];
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << fixed << setprecision(2) << Median(arr);
    return 0;
}