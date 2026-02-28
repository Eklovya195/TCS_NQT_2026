#include<bits/stdc++.h>
using namespace std;

void printPrimefactors(int n){
    //Handle 2 Separately
    while(n%2 == 0){
        cout << 2 << " ";
        while(n%2 == 0){
            n /= 2;
        }
    }

    //checking for odd factors
    for(int i=3;i*i<=n;i+=2){
        if(n % i == 0) {
            cout << i << " ";
            while(n % i == 0) {
                n /= i;
            }
        }
    }
    if(n>1) cout << n;
}

int main(){
    int n;
    cin >> n;  
    printPrimefactors(n);
    return 0;
}