#include <bits/stdc++.h>
using namespace std;
//binary searching of elements by chisa momin

 int element_check(int low,int high,int arr[],int n,int target,int ans){
  while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==target){
      ans=mid;
      return ans;
    }
    else if(arr[mid]<target){
      low=mid+1;
    }
    else{
      high=mid-1;
    }
  }
  return ans;
 }
    
  int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cin>>target;
  int ans=-1;
  int low=0,high=n-1;
  if( element_check(low,high,arr,n,target,ans)==-1){
    cout<<"Element not found";
  }
  else{
    cout<<element_check(low,high,arr,n,target,ans);
  }
  return 0;
    }