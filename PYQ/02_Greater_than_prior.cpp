//Brute Force(not used as it will show TLE(time limit exceed))
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {7,4,8,2,9};

    int cnt = 1;
    for(int i=1;i<n;i++){
        int flag = 0;
        for(int j=0;j<i;j++){
            if(arr[j] > arr[i]){
                flag = 1;
                break;
            }
        }
        if(flag == 0) cnt++;
    }

    cout << cnt;
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int arr[6] = {7,4,8,2,9,10};

    int cnt = 1;
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}