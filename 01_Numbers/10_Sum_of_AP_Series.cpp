#include <bits/stdc++.h>
using namespace std;

void SumOfAP(int n,int a,int d){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += a;
        a += d;
    }
    cout << sum;
}


int main(){
    int n,a,d;
    cin >> n >> a >> d;
    SumOfAP(n,a,d);
    return 0;
}