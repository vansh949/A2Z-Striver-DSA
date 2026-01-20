#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;   //array size
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i]; //array input taken from user
    }
    int lar = arr[0];
    int secondlar = INT_MIN;
    for(int i = 1; i<n; i++){
        if(arr[i]>lar){
            secondlar = lar;
            lar =arr[i];
        }
        else if(arr[i]>secondlar && arr[i]<lar){
            secondlar = arr[i];
        }
    }
cout << " largest element is: "<< lar <<endl<< " second largest element is: " << secondlar;
 

return 0;
}