#include<bits/stdc++.h>
using namespace std;

void SecondSmallestLargest(int arr[],int n){
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    //for second smallest
    for(int i=0;i<n;i++){
        if(arr[i] < smallest){
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second_smallest){
            second_smallest = arr[i];
        }
    }

    //for second largest
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest){
            second_largest = arr[i];
        }
    }

    cout << second_smallest << " ";
    cout << second_largest;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    SecondSmallestLargest(arr,n);
    return 0;
}