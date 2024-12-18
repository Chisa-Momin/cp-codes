#include <bits/stdc++.h>
using namespace std;

int toGuess=27;

bool testing=1;
//simple interactive problem 
//+with custom interactor

char interactor(int mid){
  if(mid>toGuess)return '>';
  else if(mid<toGuess)return '<';
  else return '=';
}
char ask(int mid){
  cout<<"? "<<mid<<endl;
  if(testing){
    cout<<interactor(mid)<<endl;
  return interactor(mid);
  }
}

   int main(){
     int toGuess;
    cin>>toGuess;
     int low=1,high=50,ans=-1;
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
