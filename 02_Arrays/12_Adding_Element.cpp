#include <bits/stdc++.h>
using namespace std;

vector<int> AddingElement(vector<int> &arr,int x){
    // arr.push_back(x);//inserting at end
    arr.insert(arr.begin(),x); // inserting at start
    return arr;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int x = 7;
    arr = AddingElement(arr,x);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}