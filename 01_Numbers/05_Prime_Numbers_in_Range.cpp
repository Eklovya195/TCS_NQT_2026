#include<bits/stdc++.h>
using namespace std;

void AllPrime(int n1,int n2){
    for(int i=n1;i<=n2;i++){
        if(i<=1) continue;
        bool isPrime = true;

        for(int j=2;j*j<=i;j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) cout << i << " ";
    }
}

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    AllPrime(n1,n2);
    return 0;
}