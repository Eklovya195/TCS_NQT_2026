#include <bits/stdc++.h>
using namespace std;

void SumOfn(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    cout << sum;
}


int main(){
    int n;
    cin >> n;
    SumOfn(n);
    return 0;
}