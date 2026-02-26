/*
A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself).
*/

#include <bits/stdc++.h>
using namespace std;

bool Isperfect(int n){
    int sum = 1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(sum == n) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    cout << boolalpha << Isperfect(n);
    return 0;
}