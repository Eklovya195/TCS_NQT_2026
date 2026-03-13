#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr = {1,2,3,2,4,3,1,2};
    unordered_map <int,int> freq;
    for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
    }

    // Move map to vector
    vector<pair<int,int>> vec(freq.begin(), freq.end());

    // Sort by frequency descending
    sort(vec.begin(), vec.end(), [](pair<int,int> a, pair<int,int> b){
        return a.second > b.second;
    });

    // Print elements according to frequency
    for(auto it : vec){
        for(int i=0;i<it.second;i++){
            cout << it.first << " ";
        }
    }

    return 0;
}