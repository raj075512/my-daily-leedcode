//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {


public:
  


    int maxCoins(int n, vector<int> &arr) {
        // code here
        arr.push_back(1);
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        arr.insert(arr.begin(),1);
     return    solve(arr,1,n,dp);
          
        
    }
      int solve( vector<int>&a, int i, int j,vector<vector<int>>&dp)
{
    if(i>j) return 0;
     int ans=INT_MIN;
     if(dp[i][j]!=-1) return dp[i][j];
    for( int k{i};k<=j;k++)
    {
        int temp=a[k]*a[i-1]*a[j+1]+solve(a,i,k-1,dp)+solve(a,k+1,j,dp);
          ans=max(ans, temp);
      dp[i][j]=ans;
    
    }
     return dp[i][j];
    
}

    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution obj;
        cout << obj.maxCoins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends