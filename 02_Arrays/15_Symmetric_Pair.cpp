#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};  // Example input
    unordered_map<int, int> mp;  // Map to store first element and its pair

    cout << "The Symmetric Pairs are: " << endl;
    
    // Loop through the array to find symmetric pairs
    for (int i = 0; i < n; i++) {
        int first = arr[i][0];
        int second = arr[i][1];
        
        // Check if {second, first} existed previously
        if (mp.find(second) != mp.end() && mp[second] == first) {
            cout << "(" << first << " " << second << ")" << " ";
        } else {
            // Store {first, second} pair in the map
            mp[first] = second;
        }
    }

    return 0;
}
