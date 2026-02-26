// #include <bits/stdc++.h>
// using namespace std;

// void SumOfGP(int n,int a,int r){
//     int sum = 0;
//     for(int i=1;i<=n;i++){
//         sum += a;
//         a *= r;
//     }
//     cout << sum;
// }


// int main(){
//     int n,a,r;
//     cin >> n >> a >> r;
//     SumOfGP(n,a,r);
//     return 0;
// }

//optimal Approach
#include <bits/stdc++.h>
using namespace std;

double SumOfGP(int n,int a,int r){
    if(r==1) return a*n;
    return a*(pow(r,n)-1)/(r-1);
}


int main(){
    int n;
    double a,r;
    cin >> n >> a >> r;
    double ans = SumOfGP(n,a,r);
    cout << ans;
    return 0;
}