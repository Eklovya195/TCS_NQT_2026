//Brute Force Approach
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;
    int arr[6] = {1,2,-3,0,-4,-5};  // Example input
    int maxProduct = 1;
    for(int i=0;i<n;i++){
        int product = arr[i];
        for(int j=i+1;j<n;j++){
            product *= arr[j];
            if(product > maxProduct) maxProduct = product;
        }
    }

    cout << maxProduct;
    return 0;
}
*/

//Better Approach(O(n))
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;
    int arr[6] = {1,2,-3,0,-4,-5};  // Example input
    int res = arr[0];
    int maxProduct = arr[0];
    int minproduct = arr[0];
    for(int i=1;i<n;i++){
        int curr = arr[i];
        if(curr < 0) swap(maxProduct,minproduct);
        maxProduct = max(curr,maxProduct*curr);
        minproduct = min(curr,minproduct*curr);

        res = max(res,maxProduct);
    }

    cout << res;
    return 0;
}
