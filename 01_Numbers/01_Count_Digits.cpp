/*
Problem: Count Digits in number
*/

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count = 0;
    if(n == 0) return 1;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int digits = countDigits(n);
    cout << digits;
    return 0;
}