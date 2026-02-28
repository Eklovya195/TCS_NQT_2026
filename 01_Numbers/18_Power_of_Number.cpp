#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int power;
    cin >> n >> power;
    int temp = n;
    for(int i=1;i<power;i++){
        n = n*temp;
    }
    cout << n;
    return 0;
}