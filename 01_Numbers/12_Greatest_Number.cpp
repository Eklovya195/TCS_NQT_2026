#include <bits/stdc++.h>
using namespace std;

int Greatest(int n1,int n2,int n3){
    if(n1>=n2 && n1>=n3) return n1;
    else if(n2>=n1 && n2>=n3) return n2;
    else return n3;
}

int main(){
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    cout << Greatest(n1,n2,n3);
    return 0;
}