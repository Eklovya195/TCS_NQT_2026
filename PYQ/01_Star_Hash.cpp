#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int hash_count = 0;
    int star_count = 0;
    //count star and hash
    for(int i=0;i<s.length();i++){
        if(s[i] == '#') hash_count++;
        else if(s[i] == '*') star_count++;
    }
    //print output
    cout << star_count-hash_count;
    return 0;
}