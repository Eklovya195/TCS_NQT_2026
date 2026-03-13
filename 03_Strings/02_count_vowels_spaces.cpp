#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int vowel_count = 0;
    int constant_count = 0;
    int space_count = 0;
    int length = s.length();
    //made every char as lower case letter
    for(int i=0;i<length;i++){
        s[i] = tolower(s[i]);
    }
    //check for vowel,constants,spaces
    for(int i=0;i<length;i++){
        if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'){
            vowel_count++;
        }else if(s[i] >= 'a' && s[i] <= 'z'){
            constant_count++;
        }else if(s[i] == ' '){
            space_count++;
        }
    }
    cout << "vowel count = " << vowel_count << endl;
    cout << "constant count = " << constant_count << endl;
    cout << "whitespace count = " << space_count;
    return 0;
}