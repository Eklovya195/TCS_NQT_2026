#include <bits/stdc++.h>
using namespace std;

vector<int> replaceWithRank(vector<int> &arr){
    vector<int> sortedArray = arr;

    //sort the array
    sort(sortedArray.begin(),sortedArray.end());

    //map for storing rank
    unordered_map<int,int> rankMap;

    //initialise rank by one
    int rank  = 1;

    //traverse through sorted array and assign rank
    for(int num : sortedArray){
        if(rankMap.find(num) == rankMap.end()){
            rankMap[num] = rank;
            rank++;
        }
    }

    //resultant array
    vector<int> result;
    for(int num : arr){
        result.push_back(rankMap[num]);
    }

    return result;
}

int main(){
    vector <int> arr = {20,15,26,2,98,6};

    vector<int> res = replaceWithRank(arr);

    //printing of resultant array
    for(int i:res){
        cout << i << " ";
    }
    return 0;
}