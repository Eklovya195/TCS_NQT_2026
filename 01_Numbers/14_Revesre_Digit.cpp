#include<bits/stdc++.h>
using namespace std;

int Reverse(int n){
    int new_num = 0;
    while(n>0){
        int rem = n%10;
        new_num = new_num*10+rem;
        n = n/10;
    }
    return new_num;

}

int main(){
    int num;
    cin >> num;
    cout << Reverse(num);
    return 0;
}