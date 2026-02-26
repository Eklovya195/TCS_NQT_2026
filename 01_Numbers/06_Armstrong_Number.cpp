#include<bits/stdc++.h>
using namespace std;

bool IsArmstrong(int n){
    int copy = n;
    int new_num = 0;
    while(copy>0){
        int rem = copy%10;
        new_num = new_num + rem*rem*rem;
        copy = copy/10;
    }
    if(new_num == n) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    cout << boolalpha << IsArmstrong(n);
    return 0;
}