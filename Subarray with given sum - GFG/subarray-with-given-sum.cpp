//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{ 
    public:
     
        
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
      vector<int>ans{-1};
      int i=0,j=0;
      long long  sum{0};
       sum+=arr[0];
      while(j<n)
      {
           if(s==0) return ans;
            if(sum<s)
            {
                j++;
                sum+=arr[j];
                
            }else if(sum>s)
            { 
              sum-=arr[i];
              i++;
            }else
            { ans.clear();
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            
           
      }   return ans;
      
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends