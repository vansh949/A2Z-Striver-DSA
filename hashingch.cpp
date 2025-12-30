#include<bits/stdc++.h>
using namespace std;

int main() {


    string s;
    cin>>s;


    // precompute 
    int hash[26] ={0};
    for (int i =0; i <s.size();i++){
        hash[s[i]-'a']++;  //s[i]-'a is just a logic for the new index 
        // if all 256 char there than index will be s[i] only no complication that
        // being  an char it will auto cast itself to the ASCII value  

    }


    int q;
    cin>>q;
   while(q--){
    char c;
    cin>>c;
    // fetch from the hash table 
    cout<<hash[c-'a']<<endl; // c-'a is just the new index 
   }
    
    return 0;
}