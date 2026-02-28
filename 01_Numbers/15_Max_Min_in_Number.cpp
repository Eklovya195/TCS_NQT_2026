#include<bits/stdc++.h>
using namespace std;

void Max_Min_Digit(int n){
    int max=0;
    int min=9;
    while(n>0){
        int rem = n%10;
        if(rem>max) max = rem;
        if(rem < min) min = rem;
        n =n/10;
    }
    cout << max << " " << min;
}

int main(){
    int n;
    cin >> n;
    Max_Min_Digit(n);
    return 0;
}