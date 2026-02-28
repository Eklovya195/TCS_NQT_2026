#include <bits/stdc++.h>
using namespace std;

void LeapYear(int year){
    if(year%4 == 0) cout << "Leap Year";
    else cout << "Not a Leap Year";
}

int main(){
    int year;
    cin >> year;
    LeapYear(year);
    return 0;
}