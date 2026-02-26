#include <bits/stdc++.h>
using namespace std;

void AllPalindrome(int n1,int n2){
    for(int i=n1;i<=n2;i++){
        int temp =i;
        int reverse = 0;
        while(temp>0){
            int rem = temp%10;
            reverse = reverse*10 + rem;
            temp /= 10;
        }
        if(reverse == i) cout << i << " ";
    }
}

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    AllPalindrome(n1,n2);
    return 0;
}

/*
Complexity Analysis:
Time Complexity: O(N), We check each of the N numbers once to see if it is a palindrome.
Space Complexity: O(1), We use a constant amount of extra space for variables during the palindrome check.
*/