//shift an array to the left by d positions
// best optimal solution using reversal algorithm
#include<bits/stdc++.h>
using namespace std;

void leftShift(int arr[], int n, int d){
    if (n == 0) return;
    d = d % n; // Step 0: Handle cases where d >= n
    reverse(arr , arr+d);
    reverse(arr+d, arr+n);
    reverse(arr,arr+n);
}

int main() {
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;  i<n; i++){
        cin>>arr[i];
        
    }
    leftShift(arr, n, 3); // shifting by 3 positions
    cout << "Shifted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}