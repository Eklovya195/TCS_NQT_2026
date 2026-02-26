#include <bits/stdc++.h>
using namespace std;

bool IsPalindrome(int n){
    int temp = n;
    int reverse = 0;
    while(temp>0){
        int rem = temp%10;
        reverse = reverse*10 + rem;
        temp /= 10;
    }
    if(reverse == n) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    cout << IsPalindrome(n);
    return 0;
}

/*
Complexity Analysis:
Time Complexity: O(log10N + 1), as in the worst case when N is a multiple of 10 the number of digits in N is log10 N + 1. In the while loop we divide N by 10 until it becomes 0 which takes log10N iterations. In each iteration of the while loop we perform constant time operations like modulus and division and pushing elements into the vector.
Space Complexity: O(1), as only a constant amount of additional memory for the reversed number regardless of size of the input numbe
*/