#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
     

    for(int i =0; i<n; i++){
        cin>> arr[i];
    }

    //precompute
    map<int , int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;

        //fetch
        cout<< mpp[num]<<endl;
    }

//just iterating in the map to get to know whether it stores in sequence or not 
    for(auto it :mpp){
        cout<< it.first <<"->"<< it.second << endl;
    }
    
    return 0;
}