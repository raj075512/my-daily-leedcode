//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int x)
    {
        //Your Code Here
        return solution2(A,n,x);
    //     bool f=false;
    //   for( int i{0};i<n-2;i++)
    //   {
    //       unordered_set<int>s;
    //       int curr=x-A[i];
    //       for( int j{i+1};j<n;j++)
    //       {
    //           if(s.find(curr-A[j])!=s.end())
    //           {
    //              f=true;break;
                 
    //           }
    //           s.insert(A[j]);
    //       }
          
    //   } return f;
    // }

}
  bool solution2(int A[], int n, int x)
  {
      sort(A, A+n);
      bool ans=false;
      for( int i{0};i<=n-3;i++)  //three pointer approach //
      {
          int lo=i+1, hi=n-1;
          while(lo<hi)
          {
              int curr=A[i]+A[lo]+A[hi];
              if(curr==x) {
                  ans=true; break;
            
              }else if(curr>x)
              {
                  hi--;
              }else
              {
                  lo++;
              }
          }
      }
      return ans;
  }
  
    };

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends