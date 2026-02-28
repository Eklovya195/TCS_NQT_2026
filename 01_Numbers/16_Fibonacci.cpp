#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    if(n==0) cout << 0;
    else{
        int last = 1;
        int SecondLast = 0;

        cout << SecondLast << " " << last << " ";

        int current;
        for(int i=2;i<=n;i++){
            current = last + SecondLast;
            SecondLast = last;
            last = current;
            cout << current << " ";
        }
    }

    return 0;
}