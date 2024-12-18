#include <bits/stdc++.h>
using namespace std;
//simple interactive problem;

char ask(int x){
  cout<<"? "<<x<<endl;
  char c;
  cin>>c;
  return c;
}

   int main(){
     int low=1,high=5,ans=-1;
     while(low<=high){
     int mid=(low+high)/2;
         char store=ask(mid);
   if(store=='<'){
    low=mid+1;
  }
  else if(store=='>'){
    high=mid-1;
  }
  else{
    ans=mid;
    break;
  }
     }
  cout<<"! "<<ans<<endl;
       return 0;
}