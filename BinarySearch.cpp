#include<bits/stdc++.h>
using namespace std;


int binarySearch( int arr[],int low, int high, int target){
    if(low>high){
        return -1;
    }
    int mid =(low+high)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid]> target){
      return( binarySearch( arr,low,mid-1,target));
    }
    else{
         return binarySearch( arr,mid+1,high,target);

    }

}

int main() {
    int n,target;
    cin>>n;
    cin>>target;
    int arr[n];
    for(int i=0; i<n; i++){
    cin>>arr[i];
}

int results = binarySearch(arr,0,n-1,target);
if(results != -1){
    cout<<"ELEMENT FOUND AT INDEX:  "<<results;
}else{
    cout<<"ELEMENT DOESNOT EXISTS"<<endl;
}



    return -1;
}