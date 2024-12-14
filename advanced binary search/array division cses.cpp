#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define pb push_back
#define int int64_t
using namespace std;

bool check(int arr[], int n, int k, int mid){
    int numOfSubarray = 1;
    int curSum = 0;
    for(int i = 0; i < n; i++){
        if(curSum + arr[i] > mid){
            numOfSubarray++;
            curSum = 0;
        }
        curSum += arr[i];
    }
    return numOfSubarray <= k;
}

signed main(){
    int n, k;
    cin >> n >> k;
    // Use std::vector to handle dynamic array sizes
    vector<int> arr(n);
    
    int s = 0, e = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        s = max(s, arr[i]);
        e += arr[i];
    }

    int ans = -1; 
    while(s <= e){
        int mid = (s + e) / 2;
        if(check(arr.data(), n, k, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    
    cout << ans << endl;
}
