// #include <bits/stdc++.h>
// using namespace std;

// void SumOfAP(int n,int a,int d){
//     int sum = 0;
//     for(int i=1;i<=n;i++){
//         sum += a;
//         a += d;
//     }
//     cout << sum;
// }


// int main(){
//     int n,a,d;
//     cin >> n >> a >> d;
//     SumOfAP(n,a,d);
//     return 0;
// }

//Optimal Approach
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of an Arithmetic Progression (AP) series
float sumofAp(float a, float d, int n)
{
    // Formula for sum of AP series: (n / 2) * (2a + (n-1) * d)
    float sum = (n / 2.0) * (2.0 * a + (n - 1) * d);

    return sum;  // Return the calculated sum
}

int main()
{
    // First term, common difference, and number of terms
    float a = 1.5, d = 3, n = 5;

    // Call the function and output the sum of the AP series
    cout << "Sum of Given Ap Series: " << sumofAp(a, d, n) << endl;

    return 0;
}