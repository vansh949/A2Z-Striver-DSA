#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;  //take arr size 
int arr[n];
for(int i = 0; i<n; i++){
    cin>>arr[i]; // take arr input 
}


// precompute tha hash table 
int hash[13]= {0};
for(int i =0; i<n;i++){
    hash[arr[i]] += 1; //jo array mai hai uska ek increase krdo 
}


int q;
cin>>q;  //no of queries to be asked 


while(q--){
int num;
cin>>num;
// fetch data from the hash table 
cout<< hash[num]<<endl;
}

return 0;
}


